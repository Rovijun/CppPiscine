public class MitCafeteria {
    public static void main(String args[]){
        String[] staff = { "Marcus", "Lateefa", "Donald", "Rashad", "Quincy", "Mia" };    
        String[] cafeteria = { "Lobby", "Dining Room", "Kitchen" };    
        int[] shifts = { 0, 1, 2, 3, 4, 5, 6, 7 }; 
        

        for (int i = 0; i < cafeteria.length; i++) {
            String cafe = "";
            for (int j = 0; j < staff.length; j++) {
                
                cafe += " " + staff[j];
            }
            System.out.println(cafeteria[i] + " :" + cafe );
        }

        

     /*    for (int i = 0; i < shifts.length; i++) {
            System.out.println("Day " + shifts[i]);
        } */
    }
}
