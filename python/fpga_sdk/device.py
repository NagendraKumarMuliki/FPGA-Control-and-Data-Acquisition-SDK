from .bindings import sdk


class FPGADevice:

    def open(self):
        return sdk.fpga_open()

    def close(self):
        sdk.fpga_close()

    def get_status(self):
        return sdk.fpga_get_status()

    def read_register(
            self,
            address):

        return sdk.fpga_read_register(
            address)

    def write_register(
            self,
            address,
            value):

        sdk.fpga_write_register(
            address,
            value)

    def start(self):
        sdk.fpga_write_register(
            0x00,
            0x01)