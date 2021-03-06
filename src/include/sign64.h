//
// Created by root on 2020/3/16.
//

#ifndef ELFSIGN_SIGN64_H
#define ELFSIGN_SIGN64_H

#include <sign.h>
#include <elf_64.h>

Elf64 *InitELF64(const char *path);

bool SignToELF64(Elf64 *elf64, RSA *pri);

bool ReadELF64Sign(Elf64 *elf64);

bool CheckSignELF64(Elf64 *elf64, RSA *pub);

bool Sign64(const char *priv, const char *elfPath);

bool CheckSign64(const char *pub, const char *elfPath);

bool exec64(const char *elf64);

bool X509CheckSign64(const char *x509Path, const char *elfPath);

#endif //ELFSIGN_SIGN64_H
