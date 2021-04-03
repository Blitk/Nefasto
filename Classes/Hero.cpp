#include <iostream>
#include <locale.h>
using namespace std;


class Hero{


    public:
        short Vida;
        short Stamina;
        char* Nome;
        char* Classe;
        const char* LifeStyle;
        short Forca;
        short Inteligencia;
        short Destreza;

        Hero(){
            this->criar();
            this->atualizar();
        }

    private:

        void criar(){
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n" ;
            cout << "Nome: ";
            cin.getline(this->Nome, 20);
            cout << "\n\nClasses: \n\t1 - Atirador \n\t2 - Carrasco \n\t3 - Hacker\n: ";
            int c;
            cin >> c;
            switch(c){
                case 1:
                    this->Classe = "Atirador";
                    break;
                case 2:
                    this->Classe = "Carrasco";
                    break;
                case 3:
                    this->Classe = "Hacker";
                    break;
                default:
                    this->Classe = "Indefinido";
                    break;
            }
            cout << "\n\nЕstilos de vida: \n\t1 - Psycho\n\t2 - Cyber\n\t\n: " ;
            cin >> c;
            switch (c)
            {
            case 1:
                this->LifeStyle = "Psycho";
                break;
            case 2:
                this->LifeStyle = "Cyber";

            default:
            this->LifeStyle = "Citizen";
                break;
            }
             cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n" ;

        }

        void atualizar(){
            if(this->LifeStyle == "Psycho"){
                this->Forca += 50;
                this->Inteligencia += 20;
            }
            if(this->LifeStyle == "Cyber"){
                this->Forca += 20;
                this->Inteligencia += 50;
            }
            if(this->Classe == "Carrasco"){
                this->Forca += 20;
            }
            if(this->Classe == "Atirador"){
                this->Forca += 10;
                this->Inteligencia += 10;
            }
            if(this->Classe == "Hacker"){
                this->Inteligencia += 20;
            }
        }
};


