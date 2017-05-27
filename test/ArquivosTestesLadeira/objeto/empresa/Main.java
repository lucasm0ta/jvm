
public class Main{
	public static void main(String [] args){
		Pessoa p = new Pessoa();
		Cliente c = new Cliente();
		Funcionario f = new Funcionario();

		p.id = 1;
		p.valor = 2.0f;
		System.out.println("Pessoa:");
		System.out.println(p.id);
		System.out.println(p.valor);

		c.id = 2;
		c.valor = 3.0f;
		c.si = 4;
		System.out.println("Cliente:");
		System.out.println(c.id);
		System.out.println(c.valor);

		f.id = 3;
		f.valor = 4.0f;
		f.si = 5;
		System.out.println("Funcionario:");
		System.out.println(f.id);
		System.out.println(f.valor);

		System.out.println(c.si);

		
	}
}
