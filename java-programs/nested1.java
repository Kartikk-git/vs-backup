class University{
    static String clg = "DCE";
    static class department{
        String deptName;
        String deptCode;

        department(String deptName,String deptCode){
            this.deptName = deptName;
            this.deptCode = deptCode;
        }
        
        void display(){
            System.out.println("College : " + clg);
            System.out.println("Department Name : " + deptName);
            System.out.println("Department Code : " + deptCode);
        }
    }
}
public class nested1 {
    public static void main(String[] args) {
        University.department dept = new University.department("Computer Science","CS");
        dept.display();
    }
}