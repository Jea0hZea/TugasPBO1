package Kuliah.OOP;

public class Date{
    private int day, month, year;

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public void display() {
        System.out.println(day + "/" + month + "/" + year);
    }

    public static void main(String[] args) {
        Date today = new Date(1, 10, 2023);

        System.out.print("Hari Ini: ");
        today.display();
    }
}