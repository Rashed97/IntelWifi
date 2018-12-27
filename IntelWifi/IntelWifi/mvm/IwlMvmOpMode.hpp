//
//  IwlMvmOpMode.hpp
//  IntelWifi
//
//  Created by Rashed Abdel-Tawab on 12/27/18.
//  Copyright © 2018 Rashed Abdel-Tawab. All rights reserved.
//

#ifndef IwlMvmOpMode_hpp
#define IwlMvmOpMode_hpp

#include "IwlOpModeOps.h"
#include "TransOps.h"

class IwlMvmOpMode : public IwlOpModeOps {
public:
    IwlMvmOpMode(TransOps *ops);
    struct ieee80211_hw *start(struct iwl_trans *trans, const struct iwl_cfg *cfg,
                               const struct iwl_fw *fw) override;
    void nic_config(struct iwl_priv *priv) override;
    
    void stop(struct iwl_priv *priv) override;
    void rx(struct iwl_priv *priv, struct napi_struct *napi, struct iwl_rx_cmd_buffer *rxb) override;
    
    IOReturn getCARD_CAPABILITIES(IO80211Interface *interface, struct apple80211_capability_data *cd) override;
    
    IOReturn getPHY_MODE(IO80211Interface *interface, struct apple80211_phymode_data *pd) override;
    
    IOReturn getPOWER(IO80211Interface *intf, apple80211_power_data *power_data) override;
    IOReturn setPOWER(IO80211Interface *intf, apple80211_power_data *power_data) override;

private:
    TransOps *_ops;

    struct iwl_priv *priv;
};

#endif /* IwlMvmOpMode_hpp */
