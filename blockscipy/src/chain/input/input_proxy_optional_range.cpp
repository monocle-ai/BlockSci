//
//  input_proxy_optional_range.cpp
//  blocksci
//
//  Created by Harry Kalodner on 9/22/18.
//
//

#include "input_proxy_py.hpp"
#include "proxy/optional_range.hpp"

#include <blocksci/chain/block.hpp>
#include <blocksci/cluster/cluster.hpp>

void addInputProxyMethodsOptionalRange(AllProxyClasses<blocksci::Input> &cls) {
	setupOptionalRangesProxy(cls);
}