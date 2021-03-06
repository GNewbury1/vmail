<?php
$labels = array();
$labels['account'] = 'Account';
$labels['accounts'] = 'Accounts';
$labels['accountcreated'] = 'Account successfully created';
$labels['accountdeleted'] = 'Account successfully deleted';
$labels['accountsaved'] = 'Account successfully saved';
$labels['accountsettings'] = 'Account Settings';
$labels['secondmail'] = 'Secondary Email';
$labels['curpasswd'] = 'Current Password';
$labels['newpasswd'] = 'New Password';
$labels['confpasswd'] = 'Confirm Password';
$labels['newaccount'] = 'New Account';
$labels['editaccount'] = 'Edit Account';

// Error messages
$labels['errnoaid'] = 'No account specified';
$labels['erraccexists'] = 'An account with that address already exists';
$labels['erracclimit'] = 'Account limit reached';
$labels['erraccnonew'] = 'Cannot create account';
$labels['erraccnoedit'] = 'Cannot edit account';
$labels['errbadquota'] = 'The quota you have chosen is larger than your domain quota';
$labels['errbademail'] = 'The email address you have chosen is invalid';
$labels['errbadsource'] = 'The forward source address is invalid';
$labels['errbaddest'] = 'One or more of your destinations is not valid';
$labels['errbadpasswd'] = 'The current password does not match';
$labels['errnoforward'] = 'There is no forward with that id';
$labels['errdeleteforward'] = 'Unable to delete the forward';

$labels['email'] = 'Email';
$labels['quota'] = 'Quota';
$labels['enabled'] = 'Enabled';
$labels['admin'] = 'Administrator';

$labels['add'] = 'Add';
$labels['yes'] = 'Yes';
$labels['no'] = 'No';
$labels['other'] = 'Other';
$labels['unlimited'] = 'Unlimited';

// Forwards specific labels
$labels['forwards'] = 'Forwards';
$labels['source'] = 'Source';
$labels['destinations'] = 'Destinations';
$labels['newforward'] = 'New Forward';
$labels['editforward'] = 'Edit Forward';
$labels['anyaddress'] = 'Any Address';
$labels['catchall'] = 'Catch All';

$labels['forwardsaved'] = 'Forward successfully saved';
$labels['forwardcreated'] = 'Forward successfully created';
$labels['forwardexists'] = 'Forward already exists';
$labels['forwarddeleted'] = 'Forward successfully deleted';

$labels['badpasswd'] = "The password you have entered doesn't contain a mix of letters of numbers";
$labels['passwdnomatch'] = "The passwords you have entered don't match";
$labels['nopasswd'] = "You haven't entered a password";
$labels['noperms'] = 'You do not have permission to modify this account';
$labels['passwdchanged'] = "Password successfully changed";

$labels['forwarding'] = 'Forwarding';
$labels['stdforward'] = 'Standard (No forwarding)';
$labels['delforward'] = 'Delete all mail';
$labels['fwdforward'] = 'Forward To: ';
$labels['savecopy'] = 'Save a copy of the email';

// Out of Office section
$labels['outofoffice'] = 'Out of Office';
$labels['autoreply_settings'] = 'Settings';
$labels['autoreply_enabled'] = 'Enabled:';
$labels['autoreply_subject'] = 'Subject:';
$labels['autoreply_body'] = 'Body';


// Help messages
$labels['helpdestinations'] = <<<EOF
A forward can be setup to deliver an email to multiple destinations, these destinations
can be another user in your domain, another forward or to an external address. All
destinations should be a complete and valid email address. e.g. info@example.com
EOF;

?>
