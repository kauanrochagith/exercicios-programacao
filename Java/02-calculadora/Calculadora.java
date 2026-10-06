import java.util.Scanner;

/*
 * Calculadora em Java
 *
 * Lê dois números e deixa o usuário escolher uma operação em um menu:
 * soma, subtração, multiplicação ou divisão. Impede a divisão por zero.
 */
public class Calculadora {
    public static void main(String[] args) {
        // Scanner lê o que o usuário digita no teclado
        Scanner sc = new Scanner(System.in);

        System.out.print("Insira o primeiro numero: ");
        double primeiro = sc.nextDouble();
        sc.nextLine(); // Descarta a quebra de linha que sobra depois do número

        System.out.print("Insira o segundo numero: ");
        double segundo = sc.nextDouble();
        sc.nextLine();

        System.out.println("=== MENU ===");
        System.out.println("1 - Soma");
        System.out.println("2 - Subtracao");
        System.out.println("3 - Multiplicacao");
        System.out.println("4 - Divisao");
        System.out.print("Sua escolha: ");
        int escolha = sc.nextInt();
        sc.nextLine();

        // Valida a opção antes de calcular
        if (escolha > 4 || escolha < 1) {
            System.out.println("Entrada inválida.");
        } else {
            // %.2f mostra o número com duas casas decimais
            if (escolha == 1) {
                System.out.printf("%.2f + %.2f = %.2f\n", primeiro, segundo, primeiro + segundo);
            } else if (escolha == 2) {
                System.out.printf("%.2f - %.2f = %.2f\n", primeiro, segundo, primeiro - segundo);
            } else if (escolha == 3) {
                System.out.printf("%.2f * %.2f = %.2f\n", primeiro, segundo, primeiro * segundo);
            } else {
                // Divisão por zero não é permitida
                if (segundo == 0) {
                    System.out.println("Entrada invalida. Nao ha divisao por zero.");
                } else {
                    System.out.printf("%.2f / %.2f = %.2f\n", primeiro, segundo, primeiro / segundo);
                }
            }
        }

        // Fecha o Scanner para liberar o recurso
        sc.close();
    }
}
