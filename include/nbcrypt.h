#ifndef N_BCRYPT_H
#define N_BCRYPT_H

#include <string>

namespace n_bcrypt {

    std::string generateHash(const std::string & password , unsigned rounds = 10 );

    bool validatePassword(const std::string & password, const std::string & hash);

}

#endif // N_BCRYPT_H
