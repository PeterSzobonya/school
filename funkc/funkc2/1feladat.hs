book :: (String, String, Int, Bool)
book = ("Emberi jatszmak", "Eric Berne", 1972, True)

getAuthor :: (String, String, Int, Bool) -> String
getAuthor (title, author, year, available) = author
--         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
--                      minta


getTitle :: (String, String, Int, Bool) -> String
getTitle (title, author, year, availabla) = title