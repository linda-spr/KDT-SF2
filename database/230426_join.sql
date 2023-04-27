USE codingon;

DROP TABLE IF EXISTS authors;
CREATE TABLE authors (
	author_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    email VARCHAR(50)
);

DROP TABLE IF EXISTS books;
CREATE TABLE books (
	book_id INT PRIMARY KEY AUTO_INCREMENT,
	author_id INT NOT NULL,
    title VARCHAR(100) NOT NULL,
    publication_date DATE NOT NULL,
    FOREIGN KEY (author_id) REFERENCES authors(author_id) ON UPDATE CASCADE ON DELETE CASCADE
);

INSERT INTO authors (author_id, first_name, last_name, email) VALUES
(1, 'J.K.', 'Rowling', 'jkrowling@gmail.com'),
(2, 'George R.R.', 'Martin', 'grmartin@yahoo.com'),
(3, 'Stephen', 'King', 'sking@hotmail.com'),
(5, '아가사', '크리스티', 'agatha.christie@example.com');

INSERT INTO books (title, author_id, publication_date)
VALUES ('Harry Potter and the Philosopher''s Stone', 1, '1997-06-26'),
       ('A Game of Thrones', 2, '1996-08-06'),
       ('The Shining', 3, '1977-01-28'),
       ('스탠드', 3, '1978-01-01'),
       ('Lucky Day', 4, '2023-03-01');
       
select * from authors INNER JOIN books ON authors.author_id = books.author_id;
select * from authors NATURAL JOIN books;
select * from authors LEFT JOIN books ON authors.author_id = books.author_id;
select * from authors RIGHT OUTER JOIN books ON authors.author_id = books.author_id;

select author_id from authors UNION ALL select author_id from books;

select authors.author_id, books.title from authors LEFT OUTER JOIN books ON authors.author_id = books.author_id UNION select authors.author_id, books.title from authors RIGHT JOIN books ON authors.author_id = books.author_id;
 
INSERT INTO books (title, author_id, publication_date)
VALUES ('Harry Potter and the Philosopher''s Stone', 1, '1997-06-26'),
       ('A Game of Thrones', 2, '1996-08-06'),
       ('The Shining', 3, '1977-01-28'),
       ('스탠드', 3, '1978-01-01');
       
UPDATE authors SET author_id = 4 WHERE last_name = 'king';