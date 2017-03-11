<?php
/**
 * @file
 * feature_rules_new_user_notify.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_rules_new_user_notify_default_rules_configuration() {
  $items = array();
  $items['rules_send_notification_new_user_registration_'] = entity_import('rules_config', '{ "rules_send_notification_new_user_registration_" : {
      "LABEL" : "Send notification (new user registration)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "RentHomeIndia: New user have registered over the portal",
            "message" : "Hi Admin,\\r\\n\\r\\nA new user has registered over the portal.\\r\\nPlease see here: [site:url]\\/admin\\/people",
            "from" : "[site:mail]"
          }
        }
      ]
    }
  }');
  return $items;
}
