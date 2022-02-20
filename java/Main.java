package latihan2.java;

public class Main {

    public static void main(String[] args) {

        Memory memori = new Memory();
        memori.setIdProduct("00001");
        memori.setPrice(2000000);
        memori.setBrand("ASES");
        memori.setModel("Memory");
        memori.setMemorySize(1000);
        memori.setFrequency(1000);
        memori.setSupportCuda(true);

        System.out.println("================================");
        System.out.println("DATA MEMORI : ");
        System.out.println("================================");
        System.out.println("- Id Product   : " + memori.getIdProduct());
        System.out.println("- Price        : Rp." + memori.getPrice());
        System.out.println("- Brand        : " + memori.getBrand());
        System.out.println("- Model        : " + memori.getModel());
        System.out.println("- Memory Size  : " + memori.getMemorySize());
        System.out.println("- Frequency    : " + memori.getFrequency());
        System.out.print("- Support Cuda : ");
        if (memori.getSupportCuda()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        System.out.println("================================");

    }

}
