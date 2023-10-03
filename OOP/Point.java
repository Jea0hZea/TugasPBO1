package Kuliah.OOP;

public class Point{
    private double x, y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("X: " + x + ", Y: " + y);
    }

    public static void main(String[] args) {
        Point myPoint = new Point(3.0, 4.0);

        System.out.print("Koordinat Titik: ");
        myPoint.display();
    }
}