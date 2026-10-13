public class Main {
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