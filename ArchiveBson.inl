Helium::Persist::BsonDate::BsonDate()
	: millis( 0x0 )
{
}

Helium::Persist::BsonDate& Helium::Persist::BsonDate::operator=( const BsonDate& rhs )
{
	millis = rhs.millis;
	return *this;
}

bool Helium::Persist::BsonDate::operator==( const BsonDate& rhs ) const
{
	return millis == rhs.millis;
}

bool Helium::Persist::BsonDate::operator!=( const BsonDate& rhs ) const
{
	return millis != rhs.millis;
}

bool Helium::Persist::BsonDate::operator<( const BsonDate& rhs ) const
{
	return millis < rhs.millis;
}

bool Helium::Persist::BsonDate::operator>( const BsonDate& rhs ) const
{
	return millis > rhs.millis;
}

Helium::Persist::BsonObjectId::BsonObjectId()
{
	MemorySet( bytes, 0, sizeof( bytes ) );
}

Helium::Persist::BsonObjectId::BsonObjectId( const BsonObjectId& rhs )
{
	MemoryCopy( bytes, rhs.bytes, sizeof( bytes ) );
}

Helium::Persist::BsonObjectId& Helium::Persist::BsonObjectId::operator=( const BsonObjectId& rhs )
{
	MemoryCopy( bytes, rhs.bytes, sizeof( bytes ) );
	return *this;
}

bool Helium::Persist::BsonObjectId::operator==( const BsonObjectId& rhs ) const
{
	return 0 == MemoryCompare( bytes, rhs.bytes, sizeof( bytes ) );
}

bool Helium::Persist::BsonObjectId::operator!=( const BsonObjectId& rhs ) const
{
	return 0 != MemoryCompare( bytes, rhs.bytes, sizeof( bytes ) );
}

bool Helium::Persist::BsonObjectId::operator<( const BsonObjectId& rhs ) const
{
	return 0 > MemoryCompare( bytes, rhs.bytes, sizeof( bytes ) );
}

bool Helium::Persist::BsonObjectId::operator>( const BsonObjectId& rhs ) const
{
	return 0 < MemoryCompare( bytes, rhs.bytes, sizeof( bytes ) );
}

Helium::Persist::BsonObjectId::operator bool() const
{
	return *this != BsonObjectId::Null;
}