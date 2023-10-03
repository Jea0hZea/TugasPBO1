package Kuliah.OOP;

public class Circle{
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double area() {
        return Math.PI * radius * radius;
    }

    public double circumference() {
        return 2 * Math.PI * radius;
    }

    public static void main(String[] args) {
        Circle myCircle = new Circle(5.0);

        System.out.println("Luas Lingkaran: " + myCircle.area());
        System.out.println("Keliling Lingkaran: " + myCircle.circumference());
    }
}