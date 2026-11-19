FPGA Register Map
Register Overview
Register	Address	Description
CONTROL	0x00	Controls FPGA operation
STATUS	0x04	FPGA status information
DATA_LENGTH	0x08	Number of acquisition samples
DMA_ADDRESS	0x0C	DMA buffer address
INTERRUPT	0x10	Interrupt status register
CONTROL Register
Address:

0x00
Control Bits
Bit	Name	Description
0	START	Start acquisition
1	STOP	Stop acquisition
2	RESET	Reset FPGA
STATUS Register
Address:

0x04
Status Bits
Bit	Name	Description
0	READY	FPGA ready
1	RUNNING	Acquisition active
2	ERROR	Error condition