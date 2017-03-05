<?php
/**
 * @file
 * feature_rules_send_notify_interested.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_rules_send_notify_interested_default_rules_configuration() {
  $items = array();
  $items['rules_send_notification_tenant_form'] = entity_import('rules_config', '{ "rules_send_notification_tenant_form" : {
      "LABEL" : "Send notification (tenant form)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "ef_interested_in_property" : "ef_interested_in_property" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "RentHomeIndia: Notify submission of Interested in Rental home",
            "message" : "Hi there,\\r\\n\\r\\nThis is a notification mail from site stating that someone has just submitted a Interested in a property form, please review the form immediately here: [site:url]\\/admin\\/structure\\/entityform_types\\/manage\\/ef_post_your_requirement\\/submissions\\/autofields_table\\r\\n\\r\\nThankyou !",
            "from" : "[site:mail]"
          }
        }
      ]
    }
  }');
  return $items;
}
