@password.setter
def password(self, pwd):
    """
    Password setter:
    - `None` if `pwd` is `None`
    - `None` if `pwd` is not a string
    - Hash `pwd` in MD5 before assign to `__password`
    """
    if pwd is None or type(pwd) is not str:
        self.__password = None
    else:
        self.__password = hashlib.md5(pwd.encode()).hexdigest().lower()
