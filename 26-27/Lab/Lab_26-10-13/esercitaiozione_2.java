class Persona {
    protected String nome;
    protected int eta;

    Persona(String nome, int eta) {
        this.nome = nome;
        this.eta = eta;
    }

    public String descrivi() {
        return "Nome: " + nome + ", età: " + eta;
    }
}

class Studente extends Persona {
    private String classe;
    private double media;

    Studente(String nome, int eta, String classe, double media) {
        super(nome, eta);
        this.classe = classe;
        this.media = media;
    }

    @Override
    public String descrivi() {
        return super.descrivi() + ", classe: " + classe + ", media: " + media;
    }

    public boolean promosso() {
        return media >= 6;
    }
}

public class esercitaiozione_2{
    public static void main(String[] args) {
        Persona[] persone = new Persona[3];

        persone[0] = new Persona("Mario", 45);
        persone[1] = new Studente("Anna", 16, "3B", 7.5);
        persone[2] = new Studente("Luca", 17, "4A", 5.2);

        for (Persona p : persone) {
            System.out.println(p.descrivi());
            if (p instanceof Studente) {
                Studente s = (Studente) p;
                System.out.println("Promosso: " + s.promosso());
            }
        }
    }
}   