//
//  IwlMvmOpMode.cpp
//  IntelWifi
//
//  Created by Rashed Abdel-Tawab on 12/27/18.
//  Copyright © 2018 Rashed Abdel-Tawab. All rights reserved.
//

#include "IwlMvmOpMode.hpp"

IwlMvmOpMode::IwlMvmOpMode(TransOps *ops) {
    _ops = ops;
}

struct ieee80211_hw *IwlMvmOpMode::start(struct iwl_trans *trans, const struct iwl_cfg *cfg, const struct iwl_fw *fw) {
/*
    priv = iwl_op_mode_dvm_start(trans, cfg, fw);
    if (priv) {
        return priv->hw;
    } else {
 */
        return NULL;
    //}
}

void IwlMvmOpMode::nic_config(struct iwl_priv *priv) {
    //iwl_nic_config(this->priv);
}

void IwlMvmOpMode::stop(struct iwl_priv *priv) {
    //iwl_op_mode_dvm_stop(priv);
}

void IwlMvmOpMode::rx(struct iwl_priv *priv, struct napi_struct *napi, struct iwl_rx_cmd_buffer *rxb) {
    //iwl_rx_dispatch(this->priv, napi, rxb);
}

IOReturn IwlMvmOpMode::getCARD_CAPABILITIES(IO80211Interface *interface,
                                            struct apple80211_capability_data *cd) {
/*
    cd->version = APPLE80211_VERSION;
    cd->capabilities[0] = 0xab;
    cd->capabilities[1] = 0x7e;
 */
    return kIOReturnSuccess;
}

IOReturn IwlMvmOpMode::getPHY_MODE(IO80211Interface *interface, struct apple80211_phymode_data *pd) {
/*
    pd->version = APPLE80211_VERSION;
    
    struct iwl_nvm_data *data = priv->nvm_data;
    if (data->sku_cap_band_24GHz_enable) {
        pd->phy_mode |= APPLE80211_MODE_11B | APPLE80211_MODE_11G;
    }
    if (data->sku_cap_band_52GHz_enable) {
        pd->phy_mode |= APPLE80211_MODE_11A;
    }
    if (data->sku_cap_11n_enable) {
        pd->phy_mode |= APPLE80211_MODE_11N;
    }
    pd->active_phy_mode = APPLE80211_MODE_AUTO;
*/
 return kIOReturnSuccess;
}

IOReturn IwlMvmOpMode::getPOWER(IO80211Interface *intf, apple80211_power_data *power_data) {
/*
    power_data->version = APPLE80211_VERSION;
    power_data->num_radios = 1;
    power_data->power_state[0] = priv->is_open == 0 ? APPLE80211_POWER_OFF : APPLE80211_POWER_ON;
 */
    return kIOReturnSuccess;
 }

IOReturn IwlMvmOpMode::setPOWER(IO80211Interface *intf, apple80211_power_data *power_data) {
/*
    if (!power_data || power_data->num_radios <= 0) {
        return kIOReturnError;
    }
    
    apple80211_power_state power_state = (apple80211_power_state)power_data->power_state[0];
    
    switch (power_state) {
        case APPLE80211_POWER_OFF:
            iwlagn_mac_stop(priv);
            break;
        case APPLE80211_POWER_ON:
            iwlagn_mac_start(priv);
            break;
        default:
            IWL_WARN(this->priv->trans, "Don't know what to do with this state: %d", power_state);
    }
*/
    return kIOReturnSuccess;
    
}
