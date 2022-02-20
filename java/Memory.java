package latihan2.java;

public class Memory extends Hardware {

    private int frequency;
    private int memorySize;
    private Boolean supportCuda;

    public Memory() {
    }

    public Memory(int frequency, int memorySize, Boolean supportCuda) {
        this.setFrequency(frequency);
        this.setMemorySize(memorySize);
        this.setSupportCuda(supportCuda);
    }

    public Boolean getSupportCuda() {
        return supportCuda;
    }

    public void setSupportCuda(Boolean supportCuda) {
        this.supportCuda = supportCuda;
    }

    public int getMemorySize() {
        return memorySize;
    }

    public void setMemorySize(int memorySize) {
        this.memorySize = memorySize;
    }

    public int getFrequency() {
        return frequency;
    }

    public void setFrequency(int frequency) {
        this.frequency = frequency;
    }

}
