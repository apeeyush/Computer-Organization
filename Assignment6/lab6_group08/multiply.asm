# multiply.asm

.text
.globl main
main:

# Print the info message
	la $a0, info_msg
	li $v0, 4
	syscall

	# We will store the two large numbers in two singly linked lists

	# Create First List and save list head in $s0. 
		jal     list_create
		move    $s0, $v0
	# Also add the input given by the user to the list.
		main_loop_a:
			li      $v0, 5
			syscall			                    # read number
			move    $s1, $v0
			li      $t0, 0
			blt     $s1, $t0, main_fwd_a	  # if input< 0 end input cycle
			li      $t0, 9
			bgt     $s1, $t0, main_fwd_a	  # if input > 9 end input cycle
			move    $a0, $s0
			move    $a1, $s1
			jal     list_add
			j       main_loop_a
	# Now Create second list and save list head in $s2
		main_fwd_a:	
			jal     list_create
		move    $s2, $v0

		main_loop_b:
			li      $v0, 5
			syscall			                    # read number
			move    $s1, $v0
			li      $t0, 0
			blt     $s1, $t0, main_fwd	#if input< 0 end input cycle
			li      $t0, 9		
			bgt     $s1, $t0, main_fwd	#if input > 9 end input cycle
			move    $a0, $s2	
			move    $a1, $s1
			jal     list_add
			j       main_loop_b

		main_fwd:
		# Print lists to ensure that input is entered correctly
		# and then reverse lists before multiplication
		# Printing list a and then reversing it
			# Print list a
				# First the message
					la $a0, print_a
					li $v0, 4
					syscall
				# Then the value
					move    $a0, $s0
					jal     list_print
			# Reverse the list
				move    $a0, $s0
				jal     list_reverse
			move    $s0, $v0		            # reverse a
		# Printing list b and then reversing it
			# Print list b
				# First the message
					la $a0, print_b
					li $v0, 4
					syscall
				# Then the value
					move    $a0, $s2
					jal     list_print
			# Reverse the list
				move    $a0, $s2
				jal     list_reverse
				move    $s2, $v0		            # reverse b
		# Multiplication Step
			move    $a0, $s0
			move    $a1, $s2
			jal     multiply		            # multiply
			move    $a0, $v0	
			jal     list_reverse  	         	# reverse o/p
		# Print the result
			move    $a0, $v0
			jal     list_print              	# print the o/p list
		# Exit
			li      $v0, 10
			syscall			                    # end program


# multiply
#
# Description: This routine takes two singly-linked lists of 
# non-negative integers as input (HEADS in $a0 and $a1) and returns the
# multiplication of them in the form of another list (HEAD in $v0).
# In case any of its arguments is an empty list, the output is the HEAD
# of the empty input list (If both inputs are empty, the output is $a0)
# This is a leaf-type routine as it calls other routines.
# Let the number in the list pointed by $a0 be a and that by $a1 be b.
# NOTE: The i/p lists must have numbers such that the LSB occurs first
# and MSB occurs last. The o/p list is formatted in the same way.
#
# Routines called: list_create, list_add, list_search
# Stack Frame Sections: saved registers(8), return address(1)

.text
multiply:
	# start of prologue
	addiu $sp, $sp, -36
	sw    $s0, ($sp)
	sw    $s1, 4($sp)
	sw    $s2, 8($sp)
	sw    $ra, 32($sp)	
	# end of prologue

# $s0 stores the HEAD of a (multiplicand)
# $s1 stores the HEAD of b (multiplier)
# $s2 stores the HEAD of output
# $s3 stores the current node in multiplier (b)
# $s4 stores the count
# $s5 save the node address $s4 in o/p list incase $s4.next is a NULL node
# $s6 is the current running node in of multiplicand(a) in the subloop
# $s7 is the current running node in of the o/p list in the subloop

	move  $s0, $a0		# save HEAD of a
	move  $s1, $a1		# save HEAD of b

	# check if input list a is empty
		move  $s2, $a0		
		li    $t0, -1
		lw    $t1, ($s2)							# load the first digit in a
		beq   $t0, $t1, multiply_end				# if a empty, return HEAD of a
	# check if input list b is empty
		move  $s2, $a1
		lw    $t1, ($s2)
		beq   $t0, $t1, multiply_end				# if b empty, then return HEAD of b 
	# create the output list
		jal   list_create		          			# create the output list
		move  $s2, $v0		            			# save the o/p HEAD in $s2
		move  $s3, $s1		            			# current node in multiplier
                                # initialized to HEAD of b
	li    $s4, 0                  # current node in o/p initialized to its HEAD

# Creating the O/P List (Raw)
multiply_loop:
	lw    $t1, ($s3)
	li    $t2, -1
	beq   $t1, $t2, multiply_fwd	# proceed as creation stage is complete

	li    $t0, 0
	move  $s7, $s2
multiply_loop_init:
	bge   $t0, $s4, multiply_loop_escape
	addi  $t0, $t0, 1		
	lw    $s7, 4($s7)
	j     multiply_loop_init

multiply_loop_escape:	
	move  $s6, $s0			
			# initialize current running node in the subloop
	

multiply_subloop:
	lw    $t1, ($s6)
	li    $t2, -1
	beq   $t1, $t2, multiply_subloop_break	  # if last a is reached, break subloop

	li    $t2, -1
	lw    $t1, ($s7)			        # load no. stored in $s4
	beq   $t1, $t2, multiply_subloop_addnode	# if($s4.num == -1) save $s4 in $s5

	# if s7.num != -1
	lw    $t0, ($s3)
	lw    $t1, ($s6)
	mult  $t0, $t1
	mflo  $t0		                  # multiply digits $s6.num * $s3.num , store in $t0

	lw    $t1, ($s7)		          # load the current number in o/p node

	#(* NOTE: ADD CHECK FOR OVERFLOW *)	
	add   $t0, $t0, $t1		        # add the nos. 

	sw    $t0, ($s7)			        # update the o/p node
	lw    $s7, 4($s7)			        # increment $s7
	lw    $s6, 4($s6)			        # increment $s6

	#(* REMARK: $s5, the backup prev. register is not used *)
	j     multiply_subloop 

multiply_subloop_addnode:
  # if s7.num == -1
	# prev. of $s4 i.e. the last non-NULL node is stored in $s5
	lw    $t0, ($s3)
	lw    $t1, ($s6)
	mult  $t0, $t1		            # multiply $s6.num * $s3.num
	mflo  $t0		                  # $t0 stores the result
                                # (hi = 0 since we multiplying digits)

	move  $a0, $s2
	move  $a1, $t0		            # need to add a node with val $t0

	jal   list_add
	
	# the new $s7 is the last node
	move  $a0, $s2
	li    $a1, -1
	jal   list_search
	
	move  $s7, $v0		            # the last node is the new $s7
	lw    $s6, 4($s6)		          # increment $s6
	

 	j     multiply_subloop
	
multiply_subloop_break:
  # break the subloop
	lw    $s3, 4($s3)
	addi  $s4, $s4, 1		          # CHECK OVERFLOW ISSUES
	j     multiply_loop		        # loop the main loop

# REFINING THE O/P LIST (i.e. all the elements of it are digits
# $t0 contains the current node in the o/p
# $t1 is the carry

multiply_fwd:
	move  $t0, $s2

multiply_refine:
	lw    $t2, ($t0)
	li    $t4, -1
	beq   $t2, $t4, multiply_end 	# end if the refinement is completed

	li    $t3, 10
	div   $t2, $t3	              # $t2/10
	mfhi  $t3	                    # move remainder
	sw    $t3, ($t0)	            # store in current node
	
	li    $t3, -1
	lw    $t6, 4($t0)	            # load the address of next node
	lw    $t2, ($t6)	            # load the next number
	beq   $t2, $t3, multiply_refine_addnode	  # add a node if this dosent work	
	#else

	mflo  $t3	                    # move quotient
	add   $t3, $t3, $t2	          # (* CHECK OVERFLOW ISSUES *)

	sw    $t3, ($t6)	            # update the next node

	lw    $t0, 4($t0)	            # increment $t0
	j     multiply_refine

multiply_refine_addnode:
	mflo  $a1	
	move  $a0, $s2
	jal   list_add           # append the quotient to the list
	move  $a0, $s2
	li    $a1, -1
	jal   list_search
	move  $t0, $v0	              # the last node the next $t0
	j     multiply_refine
	
multiply_end:
	move  $v0, $s2
	# start of epilogue
	lw    $s0, ($sp)
	lw    $s1, 4($sp)
	lw    $s2, 8($sp)
	lw    $ra, 32($sp)
	addiu $sp, $sp, 36
	jr    $ra
	# end of epilogue

#**********************************************************************
#	End of multiply.asm
#**********************************************************************



	
#----------------------------------------------------------------------
# List function: 	list_reverse	
# Arguments: 		HEAD ($a0)	
# Return:		HEAD of reversed list ($v0)
# Rountine called:	list_search
# Routine type:		non-leaf
# Stack Frame Sections:	Saved registers(3), return address(1) 
#----------------------------------------------------------------------		

.text
list_reverse:
	#start of prologue
	addiu $sp, $sp, -16
	sw $s0, ($sp)
	sw $s1, 4($sp)
	sw $s2, 8($sp)
	sw $ra, 12($sp)
	#end of prologue
	
# $s0 stores the HEAD of i/p list
# $s1 stores the HEAD of the o/p list
# $s2 points to the LAST node (NULl node) in the i/p list

	move $s0, $a0		#save the HEAd of i/p
		
	move $s1, $s0
	li $t0, -1
	lw $t1, ($s0)		#check if i/p is empty
	beq $t0, $t1, list_reverse_epi	#return i/p if its is empty	

	move $a0, $s0
	li $a1, -1
	jal list_search
	move $s2, $v0		#save the addr of LAST node

	# in the beginning od each iteration, every node- 
	# before $t0 (including $t0) in i/p is reversed.
	# $t0 contains the current node in i/p list
	# $t2 contains the $t0.next
	
	
	move $t0, $s0		#initialized to HEAD
	lw $t2, 4($s0)		#initialize the next pointer to HEAD.next
	sw $s2, 4($s0)		#link the input's HEAD to the last (NULL) node 
list_reverse_loop:
	beq $t2, $s2, list_reverse_end	#go to end sequence if next node is last
	lw $t1, 4($t2)		#save the next node of $t2 in $t1
	sw $t0, 4($t2)		#set the next node of the $t0.next to $t0
	move $t0, $t2		#increment the node $t0
	move $t2, $t1		#increment the node of $t2
	j list_reverse_loop

list_reverse_end:		#sequence when the job is completed
	move $s1, $t0		#HEAD of the o/p is the second-last node in list
list_reverse_epi:
	move $v0, $s1
	#start of epilogue
	lw $s0, ($sp)	
	lw $s1, 4($sp)
	lw $s2, 8($sp)
	lw $ra, 12($sp)
	addiu $sp, $sp, 16
	jr $ra
	#end of epilogue

#We have developed the necessary helper functions to create a modular design. They are given henceforth.

#list_create function that returns address of an unitialized list set to -1 in register $v0
.text
list_create:
	li $v0, 9			#allocate memory
	li $a0, 8			#of size 8 bytes
	syscall				#call sbrk, Head stored in $v0
	li $t1, -1
	sw $t1, ($v0)		#store -1 in the 'int' section
	jr $ra				
	
#list_add function that takes head and the number in $a0 and $a1 and appends the number at the last position
.text
list_add:
	add $sp,$sp,-8
	sw $s0,($sp)
	sw $ra,4($sp)

	move $s0, $a1		#store $a1 in $s0
	li $a1, -1
	jal list_search
	move $t0, $v0		#store the index of last node in $t0
	sw $s0, ($t0)		#store the number currently read in the last node
	jal list_create
	sw $v0, 4($t0)		#point to the last node(empty)

	lw $s0, ($sp)
	lw $ra, 4($sp)
	add $sp, $sp, 8
	jr $ra
	
		
#list_search function to take list and number to be searched, and return the position at which the number is found
.text
list_search:
	lw $t1, ($a0)		#stores Head in $t1
	move $t0, $a0
	beq $t1, $a1, list_search_end	#when they are equal, number has been found, go to the end
	move $t0, $a0		#initialize $t0 to Head	

list_search_loop:
	lw $t1, ($t0)						#store the number in the current node in $t1
	li $t2, -1		
	beq $t1, $a1, list_search_end		#if found, go to end
	beq $t1, $t2, list_search_end		#if not found, the address of the last element(tail) is returned 
	lw $t0 , 4($t0)						#if not found, load next number in $t0
	j list_search_loop

list_search_end:
	move $v0, $t0 
	jr $ra


#list_print function that gives the head of the list in $a0
.text
list_print:
	move $t0, $a0		#store the Head in $t0
	la $a0, print_newline
	li $v0, 4
	syscall				#print a newline

list_print_loop:
	li $t1, -1
	lw $t2, ($t0)
	beq $t1, $t2, list_print_end	#if the list ends
	move $a0, $t2
	li $v0, 1		
	syscall			#print output number
	la $a0, space	
	li $v0, 4
	syscall			#give whitespace
	lw $t0, 4($t0)
	j list_print_loop		

list_print_end:
	la $a0, print_newline
	li $v0, 4
	syscall			#print newline
	jr $ra			#return control back



.data
info_msg: .asciiz "This assembly program multiplies two numbers \nThe input format is as specified in the question\n"
print_newline: .asciiz "\n"
space: .asciiz " "
print_a: .asciiz "List a is : "
print_b: .asciiz "List b is : "
ans_msg: .asciiz "The answer is : "