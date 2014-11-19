#ifndef	_ASM_CPU_SH7780_H_
#define	_ASM_CPU_SH7780_H_

/*
 * Copyright (c) 2007,2008 Nobuhiro Iwamatsu
 * Copyright (c) 2008 Yusuke Goda <goda.yusuke@renesas.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 */

#define	CACHE_OC_NUM_WAYS	1
#define	CCR_CACHE_INIT		0x0000090b

/*	Exceptions	*/
#define	TRA		0xFF000020
#define	EXPEVT	0xFF000024
#define	INTEVT	0xFF000028

/* Memory Management Unit */
#define	PTEH	0xFF000000
#define	PTEL	0xFF000004
#define	TTB		0xFF000008
#define	TEA		0xFF00000C
#define	MMUCR	0xFF000010
#define	PASCR	0xFF000070
#define	IRMCR	0xFF000078

/* Cache Controller */
#define	CCR		0xFF00001C
#define	QACR0	0xFF000038
#define	QACR1	0xFF00003C
#define	RAMCR	0xFF000074

/* L Memory	*/
#define	RAMCR	0xFF000074
#define	LSA0	0xFF000050
#define	LSA1	0xFF000054
#define	LDA0	0xFF000058
#define	LDA1	0xFF00005C

/* Interrupt Controller */
#define	ICR0		0xFFD00000
#define	ICR1		0xFFD0001C
#define	INTPRI		0xFFD00010
#define	INTREQ		0xFFD00024
#define	INTMSK0		0xFFD00044
#define	INTMSK1		0xFFD00048
#define	INTMSK2		0xFFD40080
#define	INTMSKCLR0	0xFFD00064
#define	INTMSKCLR1	0xFFD00068
#define	INTMSKCLR2	0xFFD40084
#define	NMIFCR		0xFFD000C0
#define	USERIMASK	0xFFD30000
#define	INT2PRI0	0xFFD40000
#define	INT2PRI1	0xFFD40004
#define	INT2PRI2	0xFFD40008
#define	INT2PRI3	0xFFD4000C
#define	INT2PRI4	0xFFD40010
#define	INT2PRI5	0xFFD40014
#define	INT2PRI6	0xFFD40018
#define	INT2PRI7	0xFFD4001C
#define	INT2A0		0xFFD40030
#define	INT2A1		0xFFD40034
#define	INT2MSKR	0xFFD40038
#define	INT2MSKCR	0xFFD4003C
#define	INT2B0		0xFFD40040
#define	INT2B1		0xFFD40044
#define	INT2B2		0xFFD40048
#define	INT2B3		0xFFD4004C
#define	INT2B4		0xFFD40050
#define	INT2B5		0xFFD40054
#define	INT2B6		0xFFD40058
#define	INT2B7		0xFFD4005C
#define	INT2GPIC	0xFFD40090

/* local Bus State Controller */
#define	MMSELR		0xFF400020
#define	BCR			0xFF801000
#define	CS0BCR		0xFF802000
#define	CS1BCR		0xFF802010
#define	CS2BCR		0xFF802020
#define	CS4BCR		0xFF802040
#define	CS5BCR		0xFF802050
#define	CS6BCR		0xFF802060
#define	CS0WCR		0xFF802008
#define	CS1WCR		0xFF802018
#define	CS2WCR		0xFF802028
#define	CS4WCR		0xFF802048
#define	CS5WCR		0xFF802058
#define	CS6WCR		0xFF802068
#define	CS5PCR		0xFF802070
#define	CS6PCR		0xFF802080

/* DDR-SDRAM I/F */
#define	MIM_1		0xFE800008
#define	MIM_2		0xFE80000C
#define	SCR_1		0xFE800010
#define	SCR_2		0xFE800014
#define	STR_1		0xFE800018
#define	STR_2		0xFE80001C
#define	SDR_1		0xFE800030
#define	SDR_2		0xFE800034
#define	DBK_1		0xFE800400
#define	DBK_2		0xFE800404

/* PCI	Controller */
#define	SH7780_PCIECR		0xFE000008
#define	SH7780_PCIVID		0xFE040000
#define	SH7780_PCIDID		0xFE040002
#define	SH7780_PCICMD		0xFE040004
#define	SH7780_PCISTATUS	0xFE040006
#define	SH7780_PCIRID		0xFE040008
#define	SH7780_PCIPIF		0xFE040009
#define	SH7780_PCISUB		0xFE04000A
#define	SH7780_PCIBCC		0xFE04000B
#define	SH7780_PCICLS		0xFE04000C
#define	SH7780_PCILTM		0xFE04000D
#define	SH7780_PCIHDR		0xFE04000E
#define	SH7780_PCIBIST		0xFE04000F
#define	SH7780_PCIIBAR		0xFE040010
#define	SH7780_PCIMBAR0		0xFE040014
#define	SH7780_PCIMBAR1		0xFE040018
#define	SH7780_PCISVID		0xFE04002C
#define	SH7780_PCISID		0xFE04002E
#define	SH7780_PCICP		0xFE040034
#define	SH7780_PCIINTLINE	0xFE04003C
#define	SH7780_PCIINTPIN	0xFE04003D
#define	SH7780_PCIMINGNT	0xFE04003E
#define	SH7780_PCIMAXLAT	0xFE04003F
#define	SH7780_PCICID		0xFE040040
#define	SH7780_PCINIP		0xFE040041
#define	SH7780_PCIPMC		0xFE040042
#define	SH7780_PCIPMCSR		0xFE040044
#define	SH7780_PCIPMCSRBSE	0xFE040046
#define	SH7780_PCI_CDD		0xFE040047
#define	SH7780_PCICR		0xFE040100
#define	SH7780_PCILSR0		0xFE040104
#define	SH7780_PCILSR1		0xFE040108
#define	SH7780_PCILAR0		0xFE04010C
#define	SH7780_PCILAR1		0xFE040110
#define	SH7780_PCIIR		0xFE040114
#define	SH7780_PCIIMR		0xFE040118
#define	SH7780_PCIAIR		0xFE04011C
#define	SH7780_PCICIR		0xFE040120
#define	SH7780_PCIAINT		0xFE040130
#define	SH7780_PCIAINTM		0xFE040134
#define	SH7780_PCIBMIR		0xFE040138
#define	SH7780_PCIPAR		0xFE0401C0
#define	SH7780_PCIPINT		0xFE0401CC
#define	SH7780_PCIPINTM		0xFE0401D0
#define	SH7780_PCIMBR0		0xFE0401E0
#define	SH7780_PCIMBMR0		0xFE0401E4
#define	SH7780_PCIMBR1		0xFE0401E8
#define	SH7780_PCIMBMR1		0xFE0401EC
#define	SH7780_PCIMBR2		0xFE0401F0
#define	SH7780_PCIMBMR2		0xFE0401F4
#define	SH7780_PCIIOBR		0xFE0401F8
#define	SH7780_PCIIOBMR		0xFE0401FC
#define	SH7780_PCICSCR0		0xFE040210
#define	SH7780_PCICSCR1		0xFE040214
#define	SH7780_PCICSAR0		0xFE040218
#define	SH7780_PCICSAR1		0xFE04021C
#define	SH7780_PCIPDR		0xFE040220

/* DMAC */
#define	DMAC_SAR0	0xFC808020
#define	DMAC_DAR0	0xFC808024
#define	DMAC_TCR0	0xFC808028
#define	DMAC_CHCR0	0xFC80802C
#define	DMAC_SAR1	0xFC808030
#define	DMAC_DAR1	0xFC808034
#define	DMAC_TCR1	0xFC808038
#define	DMAC_CHCR1	0xFC80803C
#define	DMAC_SAR2	0xFC808040
#define	DMAC_DAR2	0xFC808044
#define	DMAC_TCR2	0xFC808048
#define	DMAC_CHCR2	0xFC80804C
#define	DMAC_SAR3	0xFC808050
#define	DMAC_DAR3	0xFC808054
#define	DMAC_TCR3	0xFC808058
#define	DMAC_CHCR3	0xFC80805C
#define	DMAC_DMAOR0	0xFC808060
#define	DMAC_SAR4	0xFC808070
#define	DMAC_DAR4	0xFC808074
#define	DMAC_TCR4	0xFC808078
#define	DMAC_CHCR4	0xFC80807C
#define	DMAC_SAR5	0xFC808080
#define	DMAC_DAR5	0xFC808084
#define	DMAC_TCR5	0xFC808088
#define	DMAC_CHCR5	0xFC80808C
#define	DMAC_SARB0	0xFC808120
#define	DMAC_DARB0	0xFC808124
#define	DMAC_TCRB0	0xFC808128
#define	DMAC_SARB1	0xFC808130
#define	DMAC_DARB1	0xFC808134
#define	DMAC_TCRB1	0xFC808138
#define	DMAC_SARB2	0xFC808140
#define	DMAC_DARB2	0xFC808144
#define	DMAC_TCRB2	0xFC808148
#define	DMAC_SARB3	0xFC808150
#define	DMAC_DARB3	0xFC808154
#define	DMAC_TCRB3	0xFC808158
#define	DMAC_DMARS0	0xFC809000
#define	DMAC_DMARS1	0xFC809004
#define	DMAC_DMARS2	0xFC809008
#define	DMAC_SAR6	0xFC818020
#define	DMAC_DAR6	0xFC818024
#define	DMAC_TCR6	0xFC818028
#define	DMAC_CHCR6	0xFC81802C
#define	DMAC_SAR7	0xFC818030
#define	DMAC_DAR7	0xFC818034
#define	DMAC_TCR7	0xFC818038
#define	DMAC_CHCR7	0xFC81803C
#define	DMAC_SAR8	0xFC818040
#define	DMAC_DAR8	0xFC818044
#define	DMAC_TCR8	0xFC818048
#define	DMAC_CHCR8	0xFC81804C
#define	DMAC_SAR9	0xFC818050
#define	DMAC_DAR9	0xFC818054
#define	DMAC_TCR9	0xFC818058
#define	DMAC_CHCR9	0xFC81805C
#define	DMAC_DMAOR1	0xFC818060
#define	DMAC_SAR10	0xFC818070
#define	DMAC_DAR10	0xFC818074
#define	DMAC_TCR10	0xFC818078
#define	DMAC_CHCR10	0xFC81807C
#define	DMAC_SAR11	0xFC818080
#define	DMAC_DAR11	0xFC818084
#define	DMAC_TCR11	0xFC818088
#define	DMAC_CHCR11	0xFC81808C
#define	DMAC_SARB6	0xFC818120
#define	DMAC_DARB6	0xFC818124
#define	DMAC_TCRB6	0xFC818128
#define	DMAC_SARB7	0xFC818130
#define	DMAC_DARB7	0xFC818134
#define	DMAC_TCRB7	0xFC818138
#define	DMAC_SARB8	0xFC818140
#define	DMAC_DARB8	0xFC818144
#define	DMAC_TCRB8	0xFC818148
#define	DMAC_SARB9	0xFC818150
#define	DMAC_DARB9	0xFC818154
#define	DMAC_TCRB9	0xFC818158

/* Clock Pulse Generator */
#define	FRQCR	0xFFC80000
#define	PLLCR	0xFFC80024
#define	MSTPCR	0xFFC80030

/* Watchdog Timer and Reset */
#define	WTCNT	WDTCNT
#define	WDTST	0xFFCC0000
#define	WDTCSR	0xFFCC0004
#define	WDTBST	0xFFCC0008
#define	WDTCNT	0xFFCC0010
#define	WDTBCNT	0xFFCC0018

/* System Control */
#define	MSTPCR	0xFFC80030

/* Timer Unit */
#define	TSTR	TSTR0
#define	TOCR	0xFFD80000
#define	TSTR0	0xFFD80004
#define	TCOR0	0xFFD80008
#define	TCNT0	0xFFD8000C
#define	TCR0	0xFFD80010
#define	TCOR1	0xFFD80014
#define	TCNT1	0xFFD80018
#define	TCR1	0xFFD8001C
#define	TCOR2	0xFFD80020
#define	TCNT2	0xFFD80024
#define	TCR2	0xFFD80028
#define	TCPR2	0xFFD8002C
#define	TSTR1	0xFFDC0004
#define	TCOR3	0xFFDC0008
#define	TCNT3	0xFFDC000C
#define	TCR3	0xFFDC0010
#define	TCOR4	0xFFDC0014
#define	TCNT4	0xFFDC0018
#define	TCR4	0xFFDC001C
#define	TCOR5	0xFFDC0020
#define	TCNT5	0xFFDC0024
#define	TCR5	0xFFDC0028

/* Timer/Counter */
#define	CMTCFG	0xFFE30000
#define	CMTFRT	0xFFE30004
#define	CMTCTL	0xFFE30008
#define	CMTIRQS	0xFFE3000C
#define	CMTCH0T	0xFFE30010
#define	CMTCH0ST	0xFFE30020
#define	CMTCH0C	0xFFE30030
#define	CMTCH1T	0xFFE30014
#define	CMTCH1ST	0xFFE30024
#define	CMTCH1C	0xFFE30034
#define	CMTCH2T	0xFFE30018
#define	CMTCH2C	0xFFE30038
#define	CMTCH3T	0xFFE3001C
#define	CMTCH3C	0xFFE3003C

/* Realtime Clock */
#define	R64CNT	0xFFE80000
#define	RSECCNT	0xFFE80004
#define	RMINCNT	0xFFE80008
#define	RHRCNT	0xFFE8000C
#define	RWKCNT	0xFFE80010
#define	RDAYCNT	0xFFE80014
#define	RMONCNT	0xFFE80018
#define	RYRCNT	0xFFE8001C
#define	RSECAR	0xFFE80020
#define	RMINAR	0xFFE80024
#define	RHRAR	0xFFE80028
#define	RWKAR	0xFFE8002C
#define	RDAYAR	0xFFE80030
#define	RMONAR	0xFFE80034
#define	RCR1	0xFFE80038
#define	RCR2	0xFFE8003C
#define	RCR3	0xFFE80050
#define	RYRAR	0xFFE80054

/* Serial Communication	Interface with FIFO */
#define	SCSMR0	0xFFE00000
#define	SCIF0_BASE SCSMR0

/* Serial I/O with FIFO */
#define	SIMDR	0xFFE20000
#define	SISCR	0xFFE20002
#define	SITDAR	0xFFE20004
#define	SIRDAR	0xFFE20006
#define	SICDAR	0xFFE20008
#define	SICTR	0xFFE2000C
#define	SIFCTR	0xFFE20010
#define	SISTR	0xFFE20014
#define	SIIER	0xFFE20016
#define	SITCR	0xFFE20028
#define	SIRCR	0xFFE2002C
#define	SPICR	0xFFE20030

/* Serial Protocol Interface */
#define	SPCR	0xFFE50000
#define	SPSR	0xFFE50004
#define	SPSCR	0xFFE50008
#define	SPTBR	0xFFE5000C
#define	SPRBR	0xFFE50010

/* Multimedia Card Interface */
#define	CMDR0	0xFFE60000
#define	CMDR1	0xFFE60001
#define	CMDR2	0xFFE60002
#define	CMDR3	0xFFE60003
#define	CMDR4	0xFFE60004
#define	CMDR5	0xFFE60005
#define	CMDSTRT	0xFFE60006
#define	OPCR	0xFFE6000A
#define	CSTR	0xFFE6000B
#define	INTCR0	0xFFE6000C
#define	INTCR1	0xFFE6000D
#define	INTSTR0	0xFFE6000E
#define	INTSTR1	0xFFE6000F
#define	CLKON	0xFFE60010
#define	CTOCR	0xFFE60011
#define	TBCR	0xFFE60014
#define	MODER	0xFFE60016
#define	CMDTYR	0xFFE60018
#define	RSPTYR	0xFFE60019
#define	TBNCR	0xFFE6001A
#define	RSPR0	0xFFE60020
#define	RSPR1	0xFFE60021
#define	RSPR2	0xFFE60022
#define	RSPR3	0xFFE60023
#define	RSPR4	0xFFE60024
#define	RSPR5	0xFFE60025
#define	RSPR6	0xFFE60026
#define	RSPR7	0xFFE60027
#define	RSPR8	0xFFE60028
#define	RSPR9	0xFFE60029
#define	RSPR10	0xFFE6002A
#define	RSPR11	0xFFE6002B
#define	RSPR12	0xFFE6002C
#define	RSPR13	0xFFE6002D
#define	RSPR14	0xFFE6002E
#define	RSPR15	0xFFE6002F
#define	RSPR16	0xFFE60030
#define	RSPRD	0xFFE60031
#define	DTOUTR	0xFFE60032
#define	DR		0xFFE60040
#define	DMACR	0xFFE60044
#define	INTCR2	0xFFE60046
#define	INTSTR2	0xFFE60048

/* Audio Codec Interface */
#define	HACCR	0xFFE40008
#define	HACCSAR	0xFFE40020
#define	HACCSDR	0xFFE40024
#define	HACPCML	0xFFE40028
#define	HACPCMR	0xFFE4002C
#define	HACTIER	0xFFE40050
#define	HACTSR	0xFFE40054
#define	HACRIER	0xFFE40058
#define	HACRSR	0xFFE4005C
#define	HACACR	0xFFE40060

/* Serial Sound Interface */
#define	SSICR	0xFFE70000
#define	SSISR	0xFFE70004
#define	SSITDR	0xFFE70008
#define	SSIRDR	0xFFE7000C

/* Flash memory Controller */
#define	FLCMNCR	0xFFE90000
#define	FLCMDCR	0xFFE90004
#define	FLCMCDR	0xFFE90008
#define	FLADR	0xFFE9000C
#define	FLDATAR	0xFFE90010
#define	FLDTCNTR	0xFFE90014
#define	FLINTDMACR	0xFFE90018
#define	FLBSYTMR	0xFFE9001C
#define	FLBSYCNT	0xFFE90020
#define	FLTRCR	0xFFE9002C

/* General	Purpose	I/O */
#define	PACR	0xFFEA0000
#define	PBCR	0xFFEA0002
#define	PCCR	0xFFEA0004
#define	PDCR	0xFFEA0006
#define	PECR	0xFFEA0008
#define	PFCR	0xFFEA000A
#define	PGCR	0xFFEA000C
#define	PHCR	0xFFEA000E
#define	PJCR	0xFFEA0010
#define	PKCR	0xFFEA0012
#define	PLCR	0xFFEA0014
#define	PMCR	0xFFEA0016
#define	PADR	0xFFEA0020
#define	PBDR	0xFFEA0022
#define	PCDR	0xFFEA0024
#define	PDDR	0xFFEA0026
#define	PEDR	0xFFEA0028
#define	PFDR	0xFFEA002A
#define	PGDR	0xFFEA002C
#define	PHDR	0xFFEA002E
#define	PJDR	0xFFEA0030
#define	PKDR	0xFFEA0032
#define	PLDR	0xFFEA0034
#define	PMDR	0xFFEA0036
#define	PEPUPR	0xFFEA0048
#define	PHPUPR	0xFFEA004E
#define	PJPUPR	0xFFEA0050
#define	PKPUPR	0xFFEA0052
#define	PMPUPR	0xFFEA0056
#define	PPUPR1	0xFFEA0060
#define	PPUPR2	0xFFEA0062
#define	PMSELR	0xFFEA0080

/* User	Break Controller */
#define	CBR0	0xFF200000
#define	CRR0	0xFF200004
#define	CAR0	0xFF200008
#define	CAMR0	0xFF20000C
#define	CBR1	0xFF200020
#define	CRR1	0xFF200024
#define	CAR1	0xFF200028
#define	CAMR1	0xFF20002C
#define	CDR1	0xFF200030
#define	CDMR1	0xFF200034
#define	CETR1	0xFF200038
#define	CCMFR	0xFF200600
#define	CBCR	0xFF200620

#endif	/* _ASM_CPU_SH7780_H_ */
