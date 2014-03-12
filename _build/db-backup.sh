
echo "Backing up database"
drush cc all
mv site-db.sql site-db.sql.1
drush sql-dump > site-db.sql
echo "Database backed up successfully."