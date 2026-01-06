class StudentStore{
    String name;
    int rollno;
    int mark;
}
public class student {
    public static void main(String arg[]){
        StudentStore s1 = new StudentStore();
        s1.name = "Arjun Murmu";
        s1.rollno = 73;
        s1.mark = 92;

        StudentStore s2 = new StudentStore();
        s2.name = "Abinash Pradhan";
        s2.rollno = 23;
        s2.mark = 93;

        StudentStore s3 = new StudentStore();
        s3.name = "Beauty Rani Hembram";
        s3.rollno = 43;
        s3.mark = 82;

        // System.out.println(s1.name + " : " + s1.mark);

        StudentStore student_D[] = new StudentStore[4];
        student_D[0] = s1;
        student_D[1] = s2;
        student_D[2] = s3;
        student_D[3] = s3;
        // for(int i = 0; i < student_D.length;i++){
        //     System.out.println(student_D[i].name + " : " + student_D[i].mark);
        // }

        for(StudentStore std : student_D){
            System.out.println(std.name + " : " + std.mark);
        }

        int nums[] = new int[4];
        nums[0] = 4;
        nums[1] = 8;
        nums[2] = 16;
        nums[3] = 32;
        for(int n : nums){
            System.out.print(n + " ");
        }
    }
}
