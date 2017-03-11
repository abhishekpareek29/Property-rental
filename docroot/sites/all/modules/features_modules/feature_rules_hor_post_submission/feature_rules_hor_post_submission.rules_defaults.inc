<?php
/**
 * @file
 * feature_rules_hor_post_submission.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function feature_rules_hor_post_submission_default_rules_configuration() {
  $items = array();
  $items['rules_send_post_submission_notification'] = entity_import('rules_config', '{ "rules_send_post_submission_notification" : {
      "LABEL" : "Send post submission notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--ct_house_on_rent" : { "bundle" : "ct_house_on_rent" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "RentHomeIndia: New Post submitted",
            "message" : "Hi Admin,\\r\\n\\r\\nA new post have been submitted to the portal, please review quickly and publish the same.\\r\\nPost url: [node:url]\\r\\n",
            "from" : "[site:mail]"
          }
        },
        { "mail" : {
            "to" : "[node:field-ct-hor-email]",
            "subject" : "RentHomeIndia: Successfully submitted your post",
            "message" : "Hi,\\r\\n\\r\\nThankyou for submitting your post at RentHomeIndia.com\\r\\nWe will review your post and will publish it shortly.\\r\\nYour post will arrive here [site:url] after the review process completion.\\r\\n\\r\\nThanks once again !\\r\\nTeam Rent Home India",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
