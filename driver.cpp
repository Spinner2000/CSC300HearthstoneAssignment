#include "Card.hpp"

int main(int argc, char** argv)
{
    Card* KingKrush = new Card("King Krush", 8, 8, 8);
    //(*KingKrush).display();
    KingKrush->display();

    Card* Pleaguebringer = new Card("Pleaguebringer", 4, 3, 3);
    Pleaguebringer->display();

    Card* AncientVoidHound = new Card("Ancient Void Hound", 9, 10, 10);
    AncientVoidHound->display();

    Card* Nethrandamus = new Card("Nethrandumas", 9, 8, 8);
    Nethrandamus->display();

    Card* CoilfangWarlord = new Card("Coilfang Warlord", 8, 9, 5);
    CoilfangWarlord->display();
}