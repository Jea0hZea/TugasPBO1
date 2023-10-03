package Kuliah.OOP;

public class Time{
    private int hour, minute;

    public Time(int hour, int minute) {
        this.hour = hour;
        this.minute = minute;
    }

    public void display() {
        System.out.println(hour + ":" + minute);
    }

    public static void main(String[] args) {
        Time now = new Time(14, 30);

        System.out.print("Waktu Sekarang: ");
        now.display();
    }
}