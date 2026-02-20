public class Personagem_teste {
    String nome;
        private int fome = 0;
        private int energia = 10;
        private int sono = 0;
        private boolean correndo = false;
        private boolean conversando = false;
        private boolean lutando = false;
     
        public Personagem() {}
     
        public Personagem(int fome, int energia, int sono) {
            this.fome = Math.max(Math.min(fome, 10), 0);
            this.energia = Math.max(Math.min(energia, 10), 0);
            this.sono = Math.max(Math.min(sono, 10), 0);
        }
     
        void cacar() {
            if (energia >= 2) {
                System.out.printf("%s está caçando...\n", nome);
                energia -= 2;
            } else {
                System.out.printf("%s está sem energia para caçar...\n", nome);
            }
            fome = Math.min(fome + 1, 10);
            sono = Math.min(sono + 1, 10);
        }
     
        void comer() {
            switch (fome) {
                case 0:
                    System.out.printf("%s está sem fome...\n", nome);
                    break;
     
                default:
                    System.out.printf("%s está comendo...\n", nome);
                    fome--;
                    energia = energia == 10 ? energia : energia + 1;
            }
        }
     
        void dormir() {
            if (sono >= 1) {
                System.out.printf("%s está dormindo...\n", nome);
                sono -= 1;
                energia = Math.min(energia + 1, 10);
            } else {
                System.out.printf("%s está sem sono...\n", nome);
            }
        }
     
        void correr() {
            if (energia >= 2 && fome >= 2 && sono >= 2) {
                correndo = true;
                energia -= 2;
                System.out.printf("%s está correndo...\n", nome);
            } else {
                System.out.printf("%s não tem energia suficiente para correr...\n", nome);
            }
        }
     
        void conversar() {
            if () {
                conversando = true;
                System.out.printf("%s está conversando...\n", nome);
            
            }
        }
     
        void lutar() {
            if (energia >= 2 && fome >= 2 && sono >= 2) {
                lutando = true;
                energia -= 2;
                fome -= 2;
                sono -= 2;
                System.out.printf("%s está lutando...\n", nome);
            } else {
                System.out.printf("%s não tem energia, está faminto ou com sono demais para lutar...\n", nome);
            }
        }
     
        public String toString() {
            return String.format("%s: (e:%d, f:%d, s:%d)", nome, energia, fome, sono);
        }
}
