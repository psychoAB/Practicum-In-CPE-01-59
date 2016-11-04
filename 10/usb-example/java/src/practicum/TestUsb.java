package practicum;

import org.usb4java.Device;

public class TestUsb {
    public static void main(String[] args) {
        McuBoard.initUsb();
        Device[] devs = McuBoard.findBoards();
        McuBoard b = new McuBoard(devs[0]);
        b.write((byte)0, (short)2, (short)0);
        b.write((byte)0, (short)1, (short)1);
        b.write((byte)0, (short)2, (short)0);
        System.out.println(b.read((byte)2, (short)0, (short)0)[0]);
        McuBoard.cleanupUsb();
    }
}
