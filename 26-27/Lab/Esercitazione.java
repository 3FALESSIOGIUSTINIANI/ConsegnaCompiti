public class Esercitazione {
    public static void main(String[] args) {
        Studente studente = new Studente();
        Persona persona = new Persona();
        studente.presentati();
        persona.presentati();
    }
}

class Persona {
    public void presentati() {
        System.out.println("Sono una persona");
    }
}

class Studente extends Persona {
    @Override
    public void presentati() {
        System.out.println("Sono uno studente");
    }
}