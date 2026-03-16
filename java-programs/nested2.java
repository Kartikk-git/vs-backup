class computer{
    private String chip = "intel";
    class CPUDetails{
        void show(){
            System.out.println("Chipset : " + chip);
        }
    }
}
public class nested2{
    public static void main(String[] args) {
        computer p = new computer();
        computer.CPUDetails cd = p.new CPUDetails();
        cd.show();
    }
}