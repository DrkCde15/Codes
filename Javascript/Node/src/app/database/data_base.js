import mysql from "mysql2";
import dotenv from 'dotenv';
dotenv.config({ path: './src/app/database/.env' });

const connection = mysql.createConnection({
    host: process.env.MYSQL_HOST,
    port: process.env.MYSQL_PORT,
    user: process.env.MYSQL_USER,
    password: process.env.MYSQL_PASSWORD,
    database: process.env.MYSQL_DATABASE
});

export default connection;