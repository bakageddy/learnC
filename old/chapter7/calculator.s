	.file	"calculator.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter a operation of your choice:\na. add                  s. subtract\nm. multiply             d. divide\nq. quit\nYour Choice: "
.LC1:
	.string	"%c"
.LC2:
	.string	"\nPlease Enter a number: "
.LC3:
	.string	"%f"
.LC4:
	.string	"Please Enter another number: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L2:
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdout(%rip), %rax
	movq	%rax, %rdi
	call	fflush@PLT
	leaq	-17(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-12(%rbp), %xmm0
	movl	-16(%rbp), %edx
	movzbl	-17(%rbp), %eax
	movsbl	%al, %eax
	movaps	%xmm0, %xmm1
	movd	%edx, %xmm0
	movl	%eax, %edi
	call	calculate
	movzbl	-17(%rbp), %eax
	cmpb	$113, %al
	jne	.L2
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L4
	call	__stack_chk_fail@PLT
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.globl	add
	.type	add, @function
add:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -4(%rbp)
	movss	%xmm1, -8(%rbp)
	movss	-4(%rbp), %xmm0
	addss	-8(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	add, .-add
	.globl	sub
	.type	sub, @function
sub:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -4(%rbp)
	movss	%xmm1, -8(%rbp)
	movss	-4(%rbp), %xmm0
	subss	-8(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	sub, .-sub
	.globl	divide
	.type	divide, @function
divide:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -4(%rbp)
	movss	%xmm1, -8(%rbp)
	pxor	%xmm0, %xmm0
	ucomiss	-8(%rbp), %xmm0
	jp	.L10
	pxor	%xmm0, %xmm0
	ucomiss	-8(%rbp), %xmm0
	jne	.L10
	pxor	%xmm0, %xmm0
	jmp	.L12
.L10:
	movss	-4(%rbp), %xmm0
	divss	-8(%rbp), %xmm0
.L12:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	divide, .-divide
	.globl	mul
	.type	mul, @function
mul:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -4(%rbp)
	movss	%xmm1, -8(%rbp)
	movss	-4(%rbp), %xmm0
	mulss	-8(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	mul, .-mul
	.section	.rodata
.LC6:
	.string	"%f + %f = %f\n"
.LC7:
	.string	"%f - %f = %f\n"
.LC8:
	.string	"%f * %f = %f\n"
.LC9:
	.string	"Enter a number other than 0:"
.LC10:
	.string	"%f / %f = %f\n"
	.text
	.globl	calculate
	.type	calculate, @function
calculate:
.LFB11:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, %eax
	movss	%xmm0, -24(%rbp)
	movss	%xmm1, -28(%rbp)
	movb	%al, -20(%rbp)
	movsbl	-20(%rbp), %eax
	cmpl	$115, %eax
	je	.L17
	cmpl	$115, %eax
	jg	.L18
	cmpl	$109, %eax
	je	.L19
	cmpl	$109, %eax
	jg	.L18
	cmpl	$97, %eax
	je	.L20
	cmpl	$100, %eax
	je	.L21
	jmp	.L18
.L20:
	movss	-28(%rbp), %xmm0
	movl	-24(%rbp), %eax
	movaps	%xmm0, %xmm1
	movd	%eax, %xmm0
	call	add
	movd	%xmm0, %eax
	movl	%eax, -4(%rbp)
	pxor	%xmm1, %xmm1
	cvtss2sd	-4(%rbp), %xmm1
	movss	-28(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	pxor	%xmm3, %xmm3
	cvtss2sd	-24(%rbp), %xmm3
	movq	%xmm3, %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$3, %eax
	call	printf@PLT
	jmp	.L22
.L17:
	movss	-28(%rbp), %xmm0
	movl	-24(%rbp), %eax
	movaps	%xmm0, %xmm1
	movd	%eax, %xmm0
	call	sub
	movd	%xmm0, %eax
	movl	%eax, -4(%rbp)
	pxor	%xmm1, %xmm1
	cvtss2sd	-4(%rbp), %xmm1
	movss	-28(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	pxor	%xmm4, %xmm4
	cvtss2sd	-24(%rbp), %xmm4
	movq	%xmm4, %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$3, %eax
	call	printf@PLT
	jmp	.L22
.L19:
	movss	-28(%rbp), %xmm0
	movl	-24(%rbp), %eax
	movaps	%xmm0, %xmm1
	movd	%eax, %xmm0
	call	mul
	movd	%xmm0, %eax
	movl	%eax, -4(%rbp)
	pxor	%xmm1, %xmm1
	cvtss2sd	-4(%rbp), %xmm1
	movss	-28(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	pxor	%xmm5, %xmm5
	cvtss2sd	-24(%rbp), %xmm5
	movq	%xmm5, %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$3, %eax
	call	printf@PLT
	jmp	.L22
.L21:
	movss	-28(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L23
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L23
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-28(%rbp), %xmm0
	movl	-24(%rbp), %eax
	movaps	%xmm0, %xmm1
	movd	%eax, %xmm0
	call	divide
	movd	%xmm0, %eax
	movl	%eax, -4(%rbp)
	jmp	.L22
.L23:
	movss	-28(%rbp), %xmm0
	movl	-24(%rbp), %eax
	movaps	%xmm0, %xmm1
	movd	%eax, %xmm0
	call	divide
	movd	%xmm0, %eax
	movl	%eax, -4(%rbp)
	pxor	%xmm1, %xmm1
	cvtss2sd	-4(%rbp), %xmm1
	movss	-28(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	pxor	%xmm6, %xmm6
	cvtss2sd	-24(%rbp), %xmm6
	movq	%xmm6, %rax
	movapd	%xmm1, %xmm2
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$3, %eax
	call	printf@PLT
	jmp	.L22
.L18:
	movss	.LC11(%rip), %xmm0
	movss	%xmm0, -4(%rbp)
	nop
.L22:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	calculate, .-calculate
	.section	.rodata
	.align 4
.LC11:
	.long	1078530010
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
