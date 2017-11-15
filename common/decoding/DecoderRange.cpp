#include "DecoderRange.h"



#ifndef ONLINEHLT
#include "DecoderHandler.h"
#else
#include "OfflineDecoderHandler.h"
#endif

#include "TrbFragmentDecoder.h"
#include "SrbFragmentDecoder.h"

namespace na62 {

template<class T>
T* ElementIterator<T>::operator *() const {
	current_->readData(handler_->getDecodedEvent()->getTimestamp());
	return current_;
}

// Explicit template instantiation
template class ElementIterator<TrbFragmentDecoder> ;

// Explicit template instantiation
template class ElementIterator<SrbFragmentDecoder> ;
}


