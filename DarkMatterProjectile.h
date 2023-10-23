#ifndef RV_DARK_MATTER_PROJECTILE_H
#define RV_DARK_MATTER_PROJECTILE_H

#include "../game/Projectile.h"

class rvDarkMatterProjectile : public idProjectile {
public:
    CLASS_PROTOTYPE(rvDarkMatterProjectile);

    rvDarkMatterProjectile(void);
    ~rvDarkMatterProjectile(void);

    void Spawn(void);
    void Save(idSaveGame* savefile) const;
    void Restore(idRestoreGame* savefile);
    virtual void Think(void);

protected:
    int nextDamageTime;
    const idDict* radiusDamageDef;
};

#endif // RV_DARK_MATTER_PROJECTILE_H
