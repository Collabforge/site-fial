#!/bin/sh

echo "Restoring database"

echo "drop database"
# copyright: http://www.garethsprice.com/blog/2011/drop-all-tables-from-a-drupal-mysql-database/
drush sql-dump | grep DROP | drush sql-cli

drush sql-cli < ./site-db.sql

drush cc all

echo "Database restored successfully."



