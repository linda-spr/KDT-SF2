CREATE TABLE customers (
	id VARCHAR(50) PRIMARY KEY NOT NULL,
    name VARCHAR(50) NOT NULL,
    email VARCHAR(255) NOT NULL,
    address VARCHAR(255) NOT NULL
);
desc customers;

drop table orders;
CREATE TABLE orders (
	id INT PRIMARY KEY AUTO_INCREMENT,
    customer_id VARCHAR(50),
    date DATE NOT NULL,
    FOREIGN KEY (customer_id) REFERENCES customers(id) ON UPDATE CASCADE ON DELETE CASCADE
);
desc orders;

CREATE TABLE order_detail (
	order_id INT,
    item VARCHAR(50) NOT NULL,
    quantity INT NOT NULL,
    FOREIGN KEY (order_id) REFERENCES orders(id) ON UPDATE CASCADE ON DELETE CASCADE
);
desc order_detail;

INSERT INTO customers (id, name, email, address) VALUES 
('john123', 'John Smith', 'john.smith@gmail.com', '123 Main St, Anytown, USA'),
('jane456', 'Jane Doe', 'jane.doe@yahoo.com', '456 Oak Ave, Somewhere'),
('alice789', 'Alice Johnson', 'alice.johnson@hotmail.com', '789 Elm St, Nowhere');

INSERT INTO orders (id, customer_id, date) VALUES 
(1, 'john123', '2022-01-01'),
(2, 'john123', '2022-02-01'),
(3, 'jane456', '2022-03-01');

INSERT INTO order_detail (order_id, item, quantity) VALUES 
(1, 'pen', 10),
(1, 'toy', 2),
(2, 'clothes', 5),
(3, 'socks', 100);

ALTER TABLE orders ADD total INT NOT NULL;
UPDATE orders SET total = 10000 where id = 1;
UPDATE orders SET total = 15000 where id = 2;
UPDATE orders SET total = 20000 where id = 3;
UPDATE customers SET name = 'John Park' where id = 'john123';
SELECT distinct customer_id from orders where date >= '2022-01-01' AND date <= '2022-02-01' ;
SELECT name from customers where id = (SELECT distinct customer_id from orders where date >= '2022-01-01' AND date <= '2022-02-01');
SELECT * from orders ORDER BY total DESC LIMIT 1;
SELECT max(total) from orders;
SELECT customer_id, COUNT(customer_id) from orders GROUP BY customer_id;
SELECT customer_id, SUM(total) AS total_price from orders GROUP BY customer_id HAVING total_price >= 21000;
SELECT o.id, c.id, c.name, c.email, c.address, o.date, o.total FROM orders o INNER JOIN customers c ON o.customer_id = c.id;
SELECT o.id, c.id, c.name, c.email, c.address, o.date, o.total FROM orders o RIGHT JOIN customers c ON o.customer_id = c.id;