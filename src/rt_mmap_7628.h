/**************************************************************************
 *
 *  BRIEF MODULE DESCRIPTION
 *     register definition for Ralink RT-series SoC
 *
 *  Copyright 2007 Ralink Inc.
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 *  THIS  SOFTWARE  IS PROVIDED   ``AS  IS'' AND   ANY  EXPRESS OR IMPLIED
 *  WARRANTIES,   INCLUDING, BUT NOT  LIMITED  TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
 *  NO  EVENT  SHALL   THE AUTHOR  BE    LIABLE FOR ANY   DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED   TO, PROCUREMENT OF  SUBSTITUTE GOODS  OR SERVICES; LOSS OF
 *  USE, DATA,  OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 **************************************************************************
 */

#ifndef __ASM_MACH_MIPS_RT2880_RT_MMAP_H
#define __ASM_MACH_MIPS_RT2880_RT_MMAP_H

#define PHYS_TO_K1(physaddr)		KSEG1ADDR(physaddr)
#define sysRegRead(phys)		(*(volatile unsigned int *)PHYS_TO_K1(phys))
#define sysRegWrite(phys, val)		((*(volatile unsigned int *)PHYS_TO_K1(phys)) = (val))
#define RALINK_SYSCTL_BASE		0xB0000000
#define RALINK_TIMER_BASE		0xB0000100
#define RALINK_INTCL_BASE		0xB0000200
#define RALINK_MEMCTRL_BASE		0xB0000300
#define RALINK_RBUS_MATRIXCTL_BASE	0xB0000400
#define RALINK_MIPS_CNT_BASE		0x10000500
#define RALINK_PIO_BASE			0xB0000600
#define RALINK_SPI_SLAVE_BASE		0xB0000700
#define RALINK_I2C_BASE			0xB0000900
#define RALINK_I2S_BASE			0xB0000A00
#define RALINK_SPI_BASE			0xB0000B00
#define RALINK_UART_LITE1_BASE		0x10000C00
#define RALINK_UART_LITE_BASE		RALINK_UART_LITE1_BASE
#define RALINK_UART_LITE2_BASE		0x10000D00
#define RALINK_UART_BASE		RALINK_UART_LITE2_BASE
#define RALINK_UART_LITE3_BASE		0x10000E00
#define RALINK_PCM_BASE			0xB0002000
#define RALINK_GDMA_BASE		0xB0002800
#define RALINK_AES_ENGINE_BASE		0xB0004000
#define RALINK_FRAME_ENGINE_BASE	0xB0100000
#define RALINK_ETH_SW_BASE		0xB0110000
#define RALINK_USB_DEV_BASE		0xB0120000
#define RALINK_MSDC_BASE		0xB0130000
#define RALINK_PCI_BASE			0xB0140000
#define RALINK_11N_MAC_BASE		0xB0180000
#define RALINK_USB_HOST_BASE		0x101C0000

#define RALINK_CPU_CLK_AUTO_CFG		0xB0000444
#define RALINK_MCNT_CFG			0xB0000500
#define RALINK_COMPARE			0xB0000504
#define RALINK_COUNT			0xB0000508

// Interrupt Controller
#define RALINK_INTCTL_SYSCTL		(1<<0)
#define RALINK_INTCTL_TIMER0		(1<<1)
#define RALINK_INTCTL_WDTIMER		(1<<2)
#define RALINK_INTCTL_ILL_ACCESS	(1<<3)
#define RALINK_INTCTL_PCM		(1<<4)
#define RALINK_INTCTL_UART		(1<<5)
#define RALINK_INTCTL_PIO		(1<<6)
#define RALINK_INTCTL_DMA		(1<<7)
#define RALINK_INTCTL_PC		(1<<9)
#define RALINK_INTCTL_I2S		(1<<10)
#define RALINK_INTCTL_SPI		(1<<11)
#define RALINK_INTCTL_UARTLITE		(1<<12)
#define RALINK_INTCTL_CRYPTO		(1<<13)
#define RALINK_INTCTL_SDXC		(1<<14)
#define RALINK_INTCTL_ESW		(1<<17)
#define RALINK_INTCTL_UHST		(1<<18)
#define RALINK_INTCTL_UDEV		(1<<19)
#define RALINK_INTCTL_GLOBAL		(1<<31)

// Reset Control Register
#define RALINK_SYS_RST			(1<<0)
#define RALINK_TIMER_RST		(1<<8)
#define RALINK_INTC_RST			(1<<9)
#define RALINK_MC_RST			(1<<10)
#define RALINK_PCM_RST			(1<<11)
#define RALINK_UART_RST			(1<<12)
#define RALINK_PIO_RST			(1<<13)
#define RALINK_DMA_RST			(1<<14)
#define RALINK_I2C_RST			(1<<16)
#define RALINK_I2S_RST			(1<<17)
#define RALINK_SPI_RST			(1<<18)
#define RALINK_UARTL_RST		(1<<19)
#define RALINK_FE_RST			(1<<21)
#define RALINK_UHST_RST			(1<<22)
#define RALINK_ESW_RST			(1<<23)
#define RALINK_EPHY_RST			(1<<24)
#define RALINK_UDEV_RST			(1<<25)
#define RALINK_PCIE0_RST		(1<<26)
#define RALINK_PCIE1_RST		(1<<27)
#define RALINK_MIPS_CNT_RST		(1<<28)
#define RALINK_CRYPTO_RST		(1<<29)
#define RALINK_SDXC_RST			(1<<30)

// Clock Conf Register
#define RALINK_PCM_CLK_EN		(1<<11)
#define RALINK_I2S_CLK_EN		(1<<17)
#define RALINK_UPHY0_CLK_EN		(1<<25)
#define RALINK_UPHY1_CLK_EN		(1<<22)
#define RALINK_PCIE0_CLK_EN		(1<<26)
#define RALINK_PCIE1_CLK_EN		(1<<27)
#define RALINK_CRYPTO_CLK_EN		(1<<29)
#define RALINK_SDXC_CLK_EN		(1<<30)

// CPU PLL CFG Register
#define CPLL_SW_CONFIG			(0x1UL << 31)
#define CPLL_MULT_RATIO_SHIFT		16
#define CPLL_MULT_RATIO			(0x7UL << CPLL_MULT_RATIO_SHIFT)
#define CPLL_DIV_RATIO_SHIFT		10
#define CPLL_DIV_RATIO			(0x3UL << CPLL_DIV_RATIO_SHIFT)
#define BASE_CLOCK			40	/* Mhz */

// AGPIO
#define MT7628_P0_EPHY_AIO_EN		(0x1<<16)
#define MT7628_P1_EPHY_AIO_EN		(0x1<<17)
#define MT7628_P2_EPHY_AIO_EN		(0x1<<18)
#define MT7628_P3_EPHY_AIO_EN		(0x1<<19)
#define MT7628_P4_EPHY_AIO_EN		(0x1<<20)

#endif

