public class timetable {
    public static void main(String a[]){
        for(int i = 1; i <= 7; i++){
            System.out.println("Day : " + i);
            for(int j = 1; j <= 7; j++){
                System.out.println((j+8) + " - " + (9+j));
            }
        }
    }
}
