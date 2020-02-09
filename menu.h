#ifndef DEF_MENU
#define DEF_MENU

#include <SFML/Graphics.hpp>
#include <sstream>
#include "enums.h"
#include "varGlobales.h"

class Menu
{
public:
    Menu(sf::RenderWindow &fenetre);
    ~Menu();
    void initMenuP();
    void initMenuNP();
    void initMenuI();
    void initMenuAp();
    void afficheMenuP();
    void afficheMenuNP();
    void afficheMenuI();
    void afficheMenuAp();
    void affficheMenu();
    void elementActif(sf::Vector2f posSouris);
    void selectionElActif();
    void retourMenuP();
    bool collisionTS(sf::FloatRect elem);
    TypeJeu getTypeJeu();
    void quitterJeu();




private:
    TypeMenu m_typeMenu;
    sf::Font m_font;
    sf::Font m_font2;
    sf::Font m_font3;

    int m_elementActif;
    sf::Text m_txtRetour;

    sf::Text m_txtTypeMenu;

    sf::Sprite m_sFondEc;
    //sf::Sprite m_sFondEc2;

    //pour menu principale
    sf::Text m_txtNouvlPartie;
    sf::Text m_txtInstructions;
    sf::Text m_txtAPropos;
    sf::Text m_txtQuitter;

    sf::Texture m_tFondEc;
    sf::Texture m_tFondEc2;

    //pour menu nouvellePartie
    sf::Text m_txtJLibre;
    sf::Text m_txtJChrono;
    sf::Text m_txtJDplRest;
    TypeJeu m_typeJeu;


    //pour menu Instructions
    sf::Text m_txtTMI;
    sf::Text m_txtMI;
    std::ostringstream m_stream_txtMI;


    //pour menu Apropos


    sf::RenderWindow *m_fenetre;



};

#endif // DEF_MENU
