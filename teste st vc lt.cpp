#include <iostream>
#include <list>
#include <cstdlib>
#include <vector>
using namespace std;

//este programa é uma mistura de testes de struct, vector e list 
struct classe {
    string nome;
    int vida;
    int dado;
    bool conjurador;
    int nivel;

    void insere(string stnome, int stvida,int stdado, bool stconjurador,int stnivel) {
        nome = stnome;
        vida = stvida;
        dado = stdado;
        conjurador = stconjurador;
        nivel = stnivel;

    }
    void mostra() {
        cout << "\nnome " <<nome;
        cout << "\nnivel " << nivel;
        cout << "\nvida total " << vida;
        cout << "\ndado da clase: d" << dado;
        cout << "\ne um conjurador?:" << conjurador;
    }
   
    void aumentanivel(int nivel) {
        if (nivel == 1) cout << "\nO " << nome << " aumentou " << nivel << " nivel";
        else cout << "\nO " << nome << " aumentou " << nivel << " niveis";
        int rolagem =1+rand() % dado;
        vida = vida + (nivel * rolagem);
        cout << "\nnova vida atual " << vida;
    }
};

int main()
{
    vector<int>n1;
    vector<int>n2;
    
    n1.push_back(1);
    n1.push_back(2);
    n1.push_back(3);
    n1.push_back(4);
    n1.push_back(5);

    n2.push_back(6);
    n2.push_back(7);
    n2.push_back(8);
    n2.push_back(9);
    n2.push_back(10);

    n1.insert(n1.begin(), 0);
    n2.insert(n2.end(), 11);

    
    cout << "1 valor do 1 vector:" << n1.front() << endl;
    cout << "valor do meio do 1 vector:" << n1.at(n1.size() / 2) << endl;
    cout << "ultimo valor do 1 vector:" << n1.back() << endl;
    cout << "1 valor do 2 vector:" << n2.front() << endl;
    cout << "valor do meio do 2 vector:" << n2.at(n2.size() / 2) << endl;
    cout << "ultimo valor do 2 vector:" << n2.back() << endl;
    //n1.swap(n2);
    for (int i = 0;i < n1.size();i++)
    {
        cout << n1[i] <<" ";
    }
    cout << endl;
    for (int i = 0;i < n2.size();i++)
    {
        cout << n2[i] << " ";
    }
    cout << endl;
    cout << "nova sequencia" << endl;

    n1.erase(n1.begin());
    n2.erase(n2.end()-1);
    
    for (int i = 0;i < n1.size();i++)
    {
        cout << n1[i] << " ";
    }
    cout << endl;
    for (int i = 0;i < n2.size();i++)
    {
        cout << n2[i] << " ";
    }
    cout << "apagando..."<<endl;
    while (!n1.empty()) {
        n1.pop_back();
    }
    n2.clear();
    cout << "tamanho do vetro 1: " << n1.size() << endl;
    cout << "tamanho do vetro 2: " << n2.size();
    cout << "\n\n";





    classe* classes = new classe[12];
    classe barbaro, bardo, bruxo, clerigo, druida, feiticeiro, guerreiro, ladino, mago, monge, paladino, patrulheira;
    classes[0] = barbaro, classes[1] = bardo, classes[2] = bruxo, classes[3] = clerigo, classes[4] = druida, classes[5] = feiticeiro;
    classes[6] = guerreiro, classes[7] = ladino, classes[8] = mago, classes[9] = monge, classes[10] = paladino, classes[11] = patrulheira;

    classes[0].insere("Barbaro", 12, 12, false,1);
    classes[1].insere("Bardo", 8, 8, true,1);
    classes[2].insere("Bruxo", 8, 8, true,1);
    classes[3].insere("Clerigo", 8, 8, true,1);
    classes[4].insere("Druida", 8, 8, true,1);
    classes[5].insere("Feiticeiro", 6, 6, true,1);
    classes[6].insere("Guerreiro", 10, 10, false,1);
    classes[7].insere("Ladino", 8, 8, false,1);
    classes[8].insere("Mago", 6, 6, true,1);
    classes[9].insere("Monge", 8, 8, false,1);
    classes[10].insere("Paladino", 10, 10, false,1);
    classes[11].insere("Patrulheira", 10, 10, false,1);
    for (int i = 0;i < 11;i++)
    {
        classes[i].mostra();
        classes[i].aumentanivel(1);
        cout << endl;
    }
    cout << "\n\n";






    list <int> num;
    list<int>::iterator it;

    for (int i = 1;i<11;i++)
    {
        num.push_front(i);
    }
    it = num.begin();
    advance(it, 9);
    num.insert(it, 69);
    num.erase(--it);
    
    for (int i = 0;i < num.size();i++)
    {
      
        cout << num.back()<<" ";
        num.pop_back();
    }

    cout << "\n\n";
    system("pause");
    return 0;
}
