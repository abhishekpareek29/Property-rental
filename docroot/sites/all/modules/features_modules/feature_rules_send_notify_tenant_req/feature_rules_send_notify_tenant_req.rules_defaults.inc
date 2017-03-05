<?php
/**
 * @file
 * feature_rules_send_notify_tenant_req.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_rules_send_notify_tenant_req_default_rules_configuration() {
  $items = array();
  $items['rules_send_notification_tenant_requirement_form_'] = entity_import('rules_config', '{ "rules_send_notification_tenant_requirement_form_" : {
      "LABEL" : "Send notification (Tenant Requirement form)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "ef_post_your_requirement" : "ef_post_your_requirement" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "RentHomeIndia: Notification for Tenant Requirement submission",
            "message" : "Hi there,\\r\\n\\r\\nThis is a notify mail from site stating that someone needs rental home, please respond immediately here:  [site:url]\\/admin\\/structure\\/entityform_types\\/manage\\/ef_post_your_requirement\\/submissions\\/autofields_table\\r\\n\\r\\nThankyou !",
            "from" : "[site:mail]"
          }
        }
      ]
    }
  }');
  return $items;
}
