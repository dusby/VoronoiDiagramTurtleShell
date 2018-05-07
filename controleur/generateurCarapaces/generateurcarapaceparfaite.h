#ifndef GENERATEURCARAPACEPARFAITE_H
#define GENERATEURCARAPACEPARFAITE_H

#include "generateurcarapace.h"

class GenerateurCarapaceParfaite : public GenerateurCarapace{
public:
    //TODO destructeur
    GenerateurCarapaceParfaite();
    GenerateurCarapaceParfaite(Carapace *);
    vector<Point *> calculPositionSites(const Bezier *) const;
};

#endif // GENERATEURCARAPACEPARFAITE_H
