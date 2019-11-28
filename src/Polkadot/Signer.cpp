// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "Signer.h"
#include "Address.h"
#include "../PublicKey.h"

using namespace TW;
using namespace TW::Polkadot;

Proto::SigningOutput Signer::sign(const Proto::SigningInput &input) noexcept {
    // TODO: Check and finalize implementation

    auto protoOutput = Proto::SigningOutput();
    return protoOutput;
}
