	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str(%rip), %rdi
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-12(%rbp), %rsi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	cmpl	$0, -12(%rbp)
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	jge	LBB0_2
## BB#1:
	xorl	%eax, %eax
	subl	-12(%rbp), %eax
	movl	%eax, -12(%rbp)
LBB0_2:
	jmp	LBB0_3
LBB0_3:                                 ## =>This Inner Loop Header: Depth=1
	movl	$10, %eax
	movl	-12(%rbp), %ecx
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	cltd
	movl	-24(%rbp), %ecx         ## 4-byte Reload
	idivl	%ecx
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
## BB#4:                                ##   in Loop: Header=BB0_3 Depth=1
	cmpl	$0, -12(%rbp)
	jne	LBB0_3
## BB#5:
	leaq	L_.str.2(%rip), %rdi
	movl	-8(%rbp), %esi
	movb	$0, %al
	callq	_printf
	xorl	%esi, %esi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movl	%esi, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"enter a number"

L_.str.1:                               ## @.str.1
	.asciz	"%d"

L_.str.2:                               ## @.str.2
	.asciz	"%d\n"


.subsections_via_symbols
