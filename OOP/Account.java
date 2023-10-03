package Kuliah.OOP;

public class Account{
    private String accountNumber;
    private double balance;

    public Account(String accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public void display() {
        System.out.println("Nomor Akun: " + accountNumber + ", Saldo: " + balance);
    }

    public static void main(String[] args) {
        Account myAccount = new Account("123456", 1000.0);

        System.out.print("Informasi Akun: ");
        myAccount.display();
    }

}