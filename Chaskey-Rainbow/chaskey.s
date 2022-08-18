	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 1
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"chaskey.c"
	.text
	.align	2
	.global	subkeys
	.arch armv4t
	.syntax unified
	.arm
	.fpu softvfp
	.type	subkeys, %function
subkeys:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r3, [r2, #12]
	lsr	r3, r3, #31
	ldr	lr, .L3
	ldr	ip, [lr, r3, lsl #2]
	ldr	r3, [r2]
	eor	ip, ip, r3, lsl #1
	str	ip, [r0]
	ldr	r4, [r2, #4]
	ldr	r3, [r2]
	lsr	r3, r3, #31
	orr	r3, r3, r4, lsl #1
	str	r3, [r0, #4]
	ldr	r4, [r2, #8]
	ldr	r3, [r2, #4]
	lsr	r3, r3, #31
	orr	r3, r3, r4, lsl #1
	str	r3, [r0, #8]
	ldr	r4, [r2, #12]
	ldr	r3, [r2, #8]
	lsr	r3, r3, #31
	orr	r3, r3, r4, lsl #1
	str	r3, [r0, #12]
	lsr	r3, r3, #31
	ldr	r3, [lr, r3, lsl #2]
	eor	ip, r3, ip, lsl #1
	str	ip, [r1]
	ldr	r2, [r0, #4]
	ldr	r3, [r0]
	lsr	r3, r3, #31
	orr	r3, r3, r2, lsl #1
	str	r3, [r1, #4]
	ldr	r2, [r0, #8]
	ldr	r3, [r0, #4]
	lsr	r3, r3, #31
	orr	r3, r3, r2, lsl #1
	str	r3, [r1, #8]
	ldr	r2, [r0, #12]
	ldr	r3, [r0, #8]
	lsr	r3, r3, #31
	orr	r3, r3, r2, lsl #1
	str	r3, [r1, #12]
	pop	{r4, lr}
	bx	lr
.L4:
	.align	2
.L3:
	.word	.LANCHOR0
	.size	subkeys, .-subkeys
	.align	2
	.global	chaskey
	.syntax unified
	.arm
	.fpu softvfp
	.type	chaskey, %function
chaskey:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, lr}
	sub	sp, sp, #16
	mov	r3, r0
	mov	r8, r1
	mov	r1, #0
	str	r1, [sp, #8]
	mov	r1, #135
	str	r1, [sp, #12]
	mov	ip, sp
	add	r1, sp, #16
	ldmdb	r1, {r0, r1}
	stm	ip, {r0, r1}
	ldr	ip, [r3]
	ldr	r6, [r3, #12]
	lsr	r1, r6, #31
	add	r0, sp, #16
	add	r1, r0, r1, lsl #2
	ldr	r9, [r1, #-16]
	eor	r9, r9, ip, lsl #1
	ldr	r7, [r3, #4]
	lsr	r1, ip, #31
	orr	r1, r1, r7, lsl #1
	ldr	r0, [r3, #8]
	lsr	r7, r7, #31
	orr	r7, r7, r0, lsl #1
	lsr	r0, r0, #31
	orr	r6, r0, r6, lsl #1
	str	ip, [r2]
	ldr	r0, [r3, #4]
	str	r0, [r2, #4]
	ldr	r0, [r3, #8]
	str	r0, [r2, #8]
	ldr	r3, [r3, #12]
	str	r3, [r2, #12]
	mov	r5, r8
	add	r10, r8, #48
.L7:
	ldr	ip, [r2]
	ldr	r3, [r5]
	eor	ip, ip, r3
	str	ip, [r2]
	ldr	r0, [r2, #4]
	ldr	r3, [r5, #4]
	eor	r0, r0, r3
	str	r0, [r2, #4]
	ldr	lr, [r2, #8]
	ldr	r3, [r5, #8]
	eor	r3, r3, lr
	str	r3, [r2, #8]
	ldr	r4, [r2, #12]
	ldr	lr, [r5, #12]
	eor	lr, lr, r4
	mov	r4, #12
.L6:
	add	ip, ip, r0
	eor	r0, ip, r0, ror #27
	add	r3, r3, lr
	eor	lr, r3, lr, ror #24
	add	ip, lr, ip, ror #16
	eor	lr, ip, lr, ror #19
	add	r3, r0, r3
	eor	r0, r3, r0, ror #25
	ror	r3, r3, #16
	subs	r4, r4, #1
	bne	.L6
	str	ip, [r2]
	str	r0, [r2, #4]
	str	r3, [r2, #8]
	str	lr, [r2, #12]
	add	r5, r5, #16
	cmp	r5, r10
	bne	.L7
	ldr	r4, [r8, #48]
	eor	ip, ip, r4
	str	ip, [r2]
	ldr	r4, [r8, #52]
	eor	r0, r0, r4
	str	r0, [r2, #4]
	ldr	r4, [r8, #56]
	eor	r3, r3, r4
	str	r3, [r2, #8]
	eor	ip, ip, r9
	eor	r0, r0, r1
	eor	r3, r3, r7
	ldr	r4, [r8, #60]
	eor	r4, r4, r6
	eor	lr, lr, r4
	mov	r4, #12
.L8:
	add	ip, ip, r0
	eor	r0, ip, r0, ror #27
	add	r3, r3, lr
	eor	lr, r3, lr, ror #24
	add	ip, lr, ip, ror #16
	eor	lr, ip, lr, ror #19
	add	r3, r0, r3
	eor	r0, r3, r0, ror #25
	ror	r3, r3, #16
	subs	r4, r4, #1
	bne	.L8
	eor	ip, ip, r9
	str	ip, [r2]
	eor	r1, r1, r0
	str	r1, [r2, #4]
	eor	r3, r3, r7
	str	r3, [r2, #8]
	eor	lr, lr, r6
	str	lr, [r2, #12]
	add	sp, sp, #16
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, lr}
	bx	lr
	.size	chaskey, .-chaskey
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC2:
	.ascii	"%08x \000"
	.align	2
.LC3:
	.ascii	"%d\012\000"
	.text
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 96
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	sub	sp, sp, #100
	ldr	ip, .L17
	add	r4, sp, #80
	ldm	ip, {r0, r1, r2, r3}
	stm	r4, {r0, r1, r2, r3}
	add	lr, sp, #16
	add	ip, ip, #16
	ldmia	ip!, {r0, r1, r2, r3}
	stmia	lr!, {r0, r1, r2, r3}
	ldmia	ip!, {r0, r1, r2, r3}
	stmia	lr!, {r0, r1, r2, r3}
	ldmia	ip!, {r0, r1, r2, r3}
	stmia	lr!, {r0, r1, r2, r3}
	ldm	ip, {r0, r1, r2, r3}
	stm	lr, {r0, r1, r2, r3}
	mov	r2, sp
	add	r1, sp, #16
	mov	r0, r4
	bl	chaskey
	mov	r5, sp
	mov	r4, #0
	ldr	r7, .L17+4
	ldr	r6, .L17+8
.L14:
	ldr	r1, [r5], #4
	mov	r0, r7
	bl	printf
	mov	r1, r4
	mov	r0, r6
	bl	printf
	add	r4, r4, #1
	cmp	r4, #4
	bne	.L14
	mov	r0, #0
	add	sp, sp, #100
	@ sp needed
	pop	{r4, r5, r6, r7, lr}
	bx	lr
.L18:
	.align	2
.L17:
	.word	.LANCHOR1
	.word	.LC2
	.word	.LC3
	.size	main, .-main
	.global	C
	.section	.rodata
	.align	2
	.set	.LANCHOR1,. + 0
.LC0:
	.word	857870592
	.word	2003195204
	.word	-1146447480
	.word	-1122868
.LC1:
	.word	123456
	.word	234567
	.word	185207048
	.word	252579084
	.word	319951120
	.word	387323156
	.word	454695192
	.word	522067228
	.word	50462976
	.word	117835012
	.word	185207048
	.word	252579084
	.word	319951120
	.word	387323156
	.word	454695192
	.word	522067228
	.data
	.align	2
	.set	.LANCHOR0,. + 0
	.type	C, %object
	.size	C, 8
C:
	.word	0
	.word	135
	.ident	"GCC: (15:9-2019-q4-0ubuntu1) 9.2.1 20191025 (release) [ARM/arm-9-branch revision 277599]"
